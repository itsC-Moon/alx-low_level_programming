#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - a function that prints strings, followed by a new line
 *
 * @separator: pointer to a constant separator
 * @n: start of input variables
 *
 * Return: nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	int i = 0;
	char *str;

	va_start(ap, n);
	while (i < (int)n)
	{
		str = va_arg(ap, char *);
		if (str)
			printf("%s", str);
		else
			printf("(nil)");
		if (i < (int)n - 1 && separator)
			printf("%s", separator);
		i++;
	}
	printf("\n");
	va_end(ap);
}
