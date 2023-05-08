#include "main.h"

/**
 * create_file - Creates a file.
 * @filename: A pointer to the name of the file to create.
 * @text_content: A pointer to a string to write to the file.
 *
 * Return: If the function fails - -1.
 *         Otherwise - 1.
 */
int create_file(const char *filename, char *text_content)
{
	int fd_open, fd_write, len = 0;

	if (!filename)
		return (-1);

	if (!text_content)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	fd_open = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	fd_write = write(fd_open, text_content, len);

	if (fd_open == -1 || fd_write == -1)
		return (-1);

	close(fd_open);

	return (1);
}
