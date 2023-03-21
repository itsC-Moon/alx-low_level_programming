#include <stdio.h>
/**
 *main - print sum of div 3 && 5
 *takes input from other functions.
 *
 * Return: void
 */
int main(void)
{
	int i;
	int sum;

	sum = 0;
	for (i = 0; i < 1024; ++i)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
	}
	return (0);
}
