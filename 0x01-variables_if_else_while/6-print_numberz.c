#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: alx nikmok 3ela had 3adab
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		/*convert digit to ASCII representation*/
		putchar(digit + 48);
		++digit;
	}
	putchar('\n');

	return (0);
}
