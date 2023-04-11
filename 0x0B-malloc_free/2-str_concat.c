#include <stdlib.h>

/**
 * str_concat - a function that concatenates two strings.
 *
 * @s1: input to string 1
 * @s2: input to string 2
 *
 * Return: NULL on faliure
 */

char *str_concat(char *s1, char *s2)
{
	int lena = 0;
	int lenb = 0;
	int len = 0;
	char *str;

	if (!s1 || !s2)
		return (NULL);

	while (s1[lena])
		lena++;

	while (s2[lenb])
		lenb++;

	str = (char *)malloc(sizeof(char) * (lena + lenb + 1));
	if (str == NULL)
		return (NULL);
	while (s1[len])
	{
		str[len] = s1[len];
		len++;
	}
	lenb = 0;
	while (s2[lenb])
	{
		str[len] = s2[lenb];
		lenb++;
		len++;
	}
	str[len] = '\0';
	return (str);
}
