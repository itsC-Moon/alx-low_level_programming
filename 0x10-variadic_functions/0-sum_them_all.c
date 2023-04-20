#include <stdarg.h>
#include <stdio.h>
/**
 * sum_them_all - adds all its parameters
 *
 * @n: start of input variables
 *
 * Return: the sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	int i = 0;
	int somme = 0;

	va_start(ap, n);
	while (i < n)
	{
		somme += va_arg(ap, int);
		i++;
	}
	va_end(ap);
	return (somme);
}
