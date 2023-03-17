#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: print all possible different
 *           combinations of two digits.
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int d1 = 0;
	int d2 = 0;

	while (d1 <= 8)
	{
		d2 = d1 + 1;
		while (d2 <= 9)
		{
			putchar(d1 + 48);
			putchar(d2 + 48);
			if (!(d1 == 8 && d2 == 9))
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

