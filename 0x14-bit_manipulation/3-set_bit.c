#include "main.h"

#define CHAR_BITS 8 /*size of char*/
#define INT_BITS (sizeof(unsigned long int) * CHAR_BITS)

/**
 * set_bit - sets the value of a bit to 1 at a given
 *           index.
 *
 * @n: number
 * @index: index to set the value of bit to 1
 *
 * Return: 1 if it worked OR -1 if it failed
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1;
	/*if index is greater than size of n in binary coded decimal*/
	if (index > INT_BITS)
		return (-1);

	mask <<= index; /*create mask based on index position*/

	*n = (*n | mask);

	return (1);
}
