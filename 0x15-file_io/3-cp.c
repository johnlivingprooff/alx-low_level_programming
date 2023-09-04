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
	int fd;

	if (ac != 3)
	{
		dprintf(2, "Usage: %s file_from file_to\n", av[0]);
		exit(97);
	}

	file_from = av[1];
	file_to = av[2];

	fd = open(file_from, O_RDONLY);
	if (fd == -1 || (read(fd, buffer, 1024) == -1))
	{
		dprintf(2, "Error: Can't read to %s\n", av[1]);
		close(fd);
		exit(98);
	}

	fd = open(file_to, O_WRONLY | O_CREAT, 0664);
	if (fd == -1 || (write(fd, buffer, 1024) == -1))
	{
		dprintf(2, "Error: Can't write to %s\n", av[2]);
		close(fd);
		exit(99);
	}

	if (close(fd) == -1)
	{
		dprintf(2, "Error: Can't close fd %i", fd);
		exit(100);
	}

	close(fd);
	return (0);
}
