#include "variadic_functions.h"

/**
 * print_char - print a char
 *
 * @arg: a list of argument pointing
 *      to the character to be printed
 *
 * Return: nothing
*/

void print_char(va_list arg)
{
	char c = va_arg(arg, int);

	printf("%c", c);
}

/**
 * print_int - print an integer
 *
 * @arg: a list of argument pointing
 *      to the character to be printed
 *
 * Return: nothing
*/

void print_int(va_list arg)
{
	int n = va_arg(arg, int);

	printf("%d", n);
}

/**
 * print_float - print a float
 *
 * @arg: a list of argument pointing
 *      to the character to be printed
 *
 * Return: nothing
*/

void print_float(va_list arg)
{
	float n = va_arg(arg, double);

	printf("%f", n);
}

/**
 * print_string - print a string
 *
 * @arg: a list of argument pointing
 *      to the character to be printed
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

void print_all(const char * const format, ...)
{

}
