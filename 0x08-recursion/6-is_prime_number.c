#include "main.h"
/**
 * isprim - isprim_recursion
 * @n: integer paramtr
 * @i: integer parameter
 * Return: sqrt
 */
int isprim(int n, int i)
{
	if (n < 0 || n == 1)
		return (0);
	if (i > (n / 2) + 1)
		return (1);
	if (n % i == 0)
		return (0);
	return (isprim(n, i + 1));
}
/**
 * is_prime_number - main funct
 * @n: int n
 * Return: int
 */
int is_prime_number(int n)
{
	return (isprim(n, 2));
}
