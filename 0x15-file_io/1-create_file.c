#include "main.h"

/**
 * create_file - creates a file
 * @filename: nmae of the file to create
 * @text_content: a NULL terminated string to write to the file
 * Return: 1 success -1 fail
 */
int create_file(const char *filename, char *text_content)
{
	int len, fd;
	ssize_t w_val;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT, 0600);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		len = strlen(text_content);

		w_val = write(fd, text_content, len);
		if (w_val == -1 || w_val < len)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
