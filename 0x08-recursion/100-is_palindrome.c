#include "main.h"
/**
 * _strlen_recursion - a function that returns the length of a string
 *
 * @s: string
 *
 * Return: length
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
		return (1 + _strlen_recursion(s + 1));
	else
		return (0);
}
/**
 * flip_flop - is_palindrome
 * @s: integer paramtr
 * @i: var
 * @j: var
 * Return: true or false
 */
int flip_flop(char *s, int i, int j)
{
	if (i > j)
		return (1);
	else if (s[i] == s[j])
		flip_flop(s, i + 1, j - 1);
	else
		return (0);
}
/**
 * is_palindrome - is_palindrome
 * @s: integer paramtr
 * Return: true or false
 */
int is_palindrome(char *s)
{
	return (flip_flop(s, 0, _strlen_recursion(s) - 1));
}
