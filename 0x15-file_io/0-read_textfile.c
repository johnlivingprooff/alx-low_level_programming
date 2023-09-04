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
	ssize_t r_val, w_val;
	int filep;
	char *buf = malloc(letters);

	if (filename == NULL)
		return (0);
	filep = open(filename, 0);
	if (filep == -1)
		return (0);

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

	w_val = write(1, buf, r_val);
	if (w_val == -1)
	{
		close(filep);
		free(buf);
		return (0);
	}
	close(filep);
	free(buf);
	return (r_val);
}