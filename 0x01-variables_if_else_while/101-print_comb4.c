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
	int d3 = 0;

	while (d1 <= 7)
	{
		d2 = d1 + 1;
		while (d2 <= 8)
		{
			d3 = d2 + 1;
			while (d3 <= 9)
			{
				putchar(d1 + 48);
				putchar(d2 + 48);
				putchar(d3 + 48);
				if (!(d1 == 7 && d2 == 8 && d3 == 9))
				{
					putchar(',');
					putchar(' ');
				}
				d3++;
			}
			d2++;
		}
		d1++;
	}
	putchar('\n');
	return (0);
}
