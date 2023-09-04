#include "main.h"

/**
 * read_textfile - reads a text file &
 * prints it to the POSIX standard output.
 * @filename: pointer to the file
 * @letters: the number of letters to read and print
 * Return:  the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t r_val;
	int filep;
	char *buf = malloc(letters);

	filep = open(filename, 0);
	if (filep == -1)
	{
		perror("open");
		return (0);
	}

	r_val = read(filep, buf, letters);
	if (r_val < 0)
	{
		perror("read");
		close(filep);
		return (0);
	}

	write(1, buf, r_val);
	close(filep);
	return (r_val);
}
