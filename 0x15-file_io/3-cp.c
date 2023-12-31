#include "main.h"
#define BUFFER_S 1024

/**
 * helper - opens, reads, and writes the files
 * @file_from: copy from here
 * @file_to: copy to here
 * @buffer: size of content to copy
 * doesn't return - void function
 */
void helper(const char *file_from, char *file_to, char *buffer)
{
	int ffrom, fto;
	ssize_t r_val;

	ffrom = open(file_from, O_RDONLY);
	if (ffrom == -1)
	{
		dprintf(1, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}

	fto = open(file_to, O_WRONLY | O_TRUNC | O_CREAT, 0664);
	if (fto == -1)
	{	dprintf(2, "Error: Can't write to %s\n", file_to);
		close(ffrom);
		exit(99);
	}

	while ((r_val = read(ffrom, buffer, BUFFER_S)) > 0)
	{
		if (write(fto, buffer, r_val) == -1)
		{	dprintf(2, "Error: Can't write to %s\n", file_to);
			close(ffrom);
			close(fto);
			exit(99);
		}
	}
	if (r_val == -1)
	{	dprintf(2, "Error: Can't read from file %s\n", file_from);
		close(ffrom);
		close(fto);
		exit(98);
	}
	if (close(ffrom) == -1)
	{	dprintf(2, "Error: Can't close fd %i", ffrom);
		exit(100);
	}
	if (close(fto) == -1)
	{	dprintf(2, "Error: Can't close fd %i", fto);
		exit(100);
	}
}

/**
 * main - program that copies the content of a file to another file.
 * @ac: argument counter
 * @av: argument vector
 * Return: 0 - Always successful
 */
int main(int ac, char **av)
{
	char *buffer = malloc(BUFFER_S), *file_from, *file_to;

	if (ac != 3)
	{
		dprintf(2, "Usage: %s file_from file_to\n", "cp");
		exit(97);
	}
	file_from = av[1];
	file_to = av[2];

	helper(file_from, file_to, buffer);

	return (0);
}
