#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and prints it to POSIX stdout.
 * @filename: A pointer to the name of the file.
 * @letters: The number of letters the
 *           function should read and print.
 *
 * Return: If the function fails or filename is NULL - 0.
 *         O/w - the actual number of bytes the function can read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
    ssize_t fd_open, fd_read, fd_write;
    char *buffer;

    if (!filename)
        return (0);

    buffer = malloc(sizeof(char) * letters);
    if (!buffer)
        return (0);

    fd_open = open(filename, O_RDONLY);
    fd_read = read(fd_open, buffer, letters);
    fd_write = write(STDOUT_FILENO, buffer, fd_read);

    if (fd_open == -1 || fd_read == -1 || fd_write == -1 || fd_write != fd_read)
    {
        free(buffer);
        return (0);
    }

    free(buffer);
    close(fd_open);

    return (fd_write);
}
