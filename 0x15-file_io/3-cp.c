#include "main.h"

/**
 * main - program that copies the content of a file to another file.
 * @ac: argument counter
 * @av: argument vector
 * Return: 0 - Always successful
 */
int main(int ac, char **av)
{
	char *buffer = malloc(1024);
	char *file_from, *file_to;
	int ff, ft;

	if (ac != 3)
	{
		dprintf(2, "Usage: %s file_from file_to\n", av[0]);
		exit(97);
	}

	file_from = av[1];
	file_to = av[2];

	ff = open(file_from, O_RDONLY);
	if (ff == -1 || (read(ff, buffer, 1024) == -1))
	{
		dprintf(2, "Error: Can't read to %s\n", av[1]);
		close(ff);
		exit(98);
	}

	ft = open(file_to, O_WRONLY | O_CREAT, 0664);
	if (ft == -1 || (write(ft, buffer, 1024) == -1))
	{
		dprintf(2, "Error: Can't write to %s\n", av[2]);
		close(ft);
		exit(99);
	}

	if (close(ff) == -1)
	{
		dprintf(2, "Error: Can't close fd %i", ff);
		exit(100);
	}

	close(ft);
	return (0);
}
