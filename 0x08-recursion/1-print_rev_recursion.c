#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse
 *
 * @s: string
 *
 * Return: nothing
*/

void _print_rev_recursion(char *s)
{
	if(*s != '\0')
	{
		_print_rev_recursion(s+1);
		putchar(*s);
	}
	
}
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    _print_rev_recursion("\nColton Walker");
    return (0);
}