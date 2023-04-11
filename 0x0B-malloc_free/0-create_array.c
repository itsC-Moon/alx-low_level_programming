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
	char *buffer;
	unsigned int i;

	if (size == 0)
		return (NULL);

	buffer = (char *)malloc(sizeof(char) * size);

	for (i = 0; i < size; ++i)
		buffer[i] = c;

	return (buffer);
}
