#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: hello world
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int d1 = 0;
	int d2 = 0;

	while (d1 <= 98)
	{
		d2 = d1 + 1;
		while (d2 <= 99)
		{
			putchar(d1 / 10 + 48);
			putchar(d1 % 10 + 48);
			putchar(' ');
			putchar(d2 / 10 + 48);
			putchar(d2 % 10 + 48);
			if (!(d1 == 99 && d2 == 98))
			{
				putchar(',');
				putchar(' ');
			}
			d2++;
		}
		d1++;
	}
	putchar('\n');
	return (0);
}
