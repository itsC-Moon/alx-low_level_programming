#include "variadic_functions.h"
/**
 * print_string - a function that prints string
 *
 * @arg: va arg
 *
 * Description: print string or nil;
 *
 * Return: nothing
 */
void print_string(va_list arg)
{
	char *str = va_arg(arg, char *);

	if (str == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", str);
}

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
	int flag = 0;

	va_start(ap, format);
	while (format[i])
	{
		switch (format[i])
		{
		case 's':
			print_string(ap);
			flag = 1;
			break;
		case 'i':
			printf("%d", va_arg(ap, int));
			flag = 1;
			break;
		case 'f':
			printf("%f", va_arg(ap, double));
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
