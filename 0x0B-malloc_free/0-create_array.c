#include <stdlib.h>
/**
 * create_array - create and set buffer
 * @c: char to set to
 * @size: the size of of buffer
 *
 * Return: Nothing.
 */
char *create_array(unsigned int size, char c)
{
	char *buffer = (char *)malloc(sizeof(char) * size);
	unsigned int i;

	for (i = 0; i < size; ++i)
		buffer[i] = c;

	return (buffer);
}
