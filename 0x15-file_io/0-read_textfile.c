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
	char *buf;

	if (filename == NULL)
		return (0);
	filep = open(filename, O_RDONLY);
	if (filep == -1)
		return (0);

	buf = malloc(letters);
	if (buf == NULL)
	{
		close(filep);
		return (0);
	}
	r_val = read(filep, buf, letters);
	if (r_val == -1)
	{
		close(filep);
		free(buf);
		return (0);
	}

	if (write(2, buf, r_val) == -1)
	{
		close(filep);
		free(buf);
		return (0);
	}
	close(filep);
	free(buf);
	return (r_val);
}
