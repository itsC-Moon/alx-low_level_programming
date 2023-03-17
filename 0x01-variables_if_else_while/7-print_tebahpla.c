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
	char ch = 'z';

	while (ch >= 'a')
	{
		putchar(ch);
		--ch;
	}
	putchar('\n');

	return (0);
}
