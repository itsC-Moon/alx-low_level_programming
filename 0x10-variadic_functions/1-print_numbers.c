#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - a function that print numbers, followed by a new line.
 *
 * @separator: pointer to constant separator
 * @n: start of input variables
 *
 * Return: nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	int i = 0;

	va_start(ap, n);
	while (i < (int)n)
	{
		printf("%d", va_arg(ap, int));
		if (i < (int)n - 1)
			printf("%s", separator);
		i++;
	}
	printf("\n");
	va_end(ap);
}
