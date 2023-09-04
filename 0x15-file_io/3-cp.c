#include "main.h"
#define BUFFER_S 1024

/**
 * main - program that copies the content of a file to another file.
 * @ac: argument counter
 * @av: argument vector
 * Return: 0 - Always successful
 */
int main(int ac, char **av)
{
	char *buffer = malloc(BUFFER_S);
	char *file_from, *file_to;
	int ffrom, fto;

	if (ac != 3)
	{
		dprintf(2, "Usage: %s file_from file_to\n", av[0]);
		exit(97);
	}
	file_from = av[1];
	file_to = av[2];
	ffrom = open(file_from, O_RDONLY);
	if (ffrom == -1 || (read(ffrom, buffer, BUFFER_S) == -1))
	{
		dprintf(2, "Error: Can't read from %s\n", av[1]);
		close(ffrom);
		exit(98);
	}
	fto = open(file_to, O_WRONLY | O_CREAT, 0664);
	if (fto == -1 || (write(fto, buffer, BUFFER_S) == -1))
	{
		dprintf(2, "Error: Can't write to %s\n", av[2]);
		close(ffrom);
		close(fto);
		exit(99);
	}
	if (close(ffrom) == -1)
	{
		dprintf(2, "Error: Can't close fd %i", ffrom);
		exit(100);
	}
	if (close(fto) == -1)
	{
		dprintf(2, "Error: Can't close fd %i", fto);
		exit(100);
	}

	return (0);
}
