#include "variadic_functions.h"
/**
 * print_all - a function that prints anything
 *
 * @format: A string of character representing
 *          the argument types
 *
 * Description: If any argument not of type char,
 *              int, float or char * is ignored
 *
 * Return: nothing
 */

void print_all(const char *const format, ...)
{
	va_list ap;
	int i = 0;
	char *str;
	int flag = 0;

	va_start(ap, format);
	while (format[i])
	{
		switch (format[i])
		{
		case 's':
			str = va_arg(ap, char *);
			if (str)
				printf("%s", str);
			else
				printf("(nil)");
			flag = 1;
			break;
		case 'i':
			printf("%d", va_arg(ap, int));
			flag = 1;
			break;
		case 'f':
			printf("%f", (float)va_arg(ap, double));
			flag = 1;
			break;
		case 'c':
			printf("%c", (char)va_arg(ap, int));
			flag = 1;
			break;
		}
		if (flag && format[i + 1])
		{
			printf(", ");
			flag = 0;
		}
		i++;
	}
	printf("\n");
}
#include "variadic_functions.h"
