#include "main.h"
#include <stdio.h>
/**
 * print_times_table - checks if character is a letter
 *            both lowercase or uppercase
 *
 * @n: takes input from other functions.
 *
 * Return: void
 */
void print_times_table(int n)
{
	int i;
	int j;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; ++i)
		{
			for (j = 0; j <= n; ++j)
			{
				printf("%d", i * j);
				if (j + 1 <= n)
				{
					printf(",");
					if (i * (j + 1) <= 9)
						printf("   ");
					else if (i * (j + 1) < 100)
						printf("  ");
					else
						printf(" ");
				}
			}
			printf("\n");
		}
	}
}
