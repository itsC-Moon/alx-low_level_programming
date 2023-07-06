#include "main.h"

#define CHAR_BITS 8 /*size of char*/
#define INT_BITS (sizeof(unsigned long int) * CHAR_BITS)

/**
 * get_bit - gets a bit at a given index
 *
 * @n: decimal value
 * @index: integer value of bit position
 *        to get from @n
 *
 * Return: the value of the bit or -1 if an
 *          error occured
*/
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	/*if index is greater than size of n in binary coded decimal*/
	if (index > INT_BITS)
		return (-1);

	bit = ((n >> index) & 1); /*shift n right by index and with 1 to find bit*/

	return (bit);
}
