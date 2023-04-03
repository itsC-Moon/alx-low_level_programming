/**
 * set_string - a function that fills
 *         memory with a constant byte
 *
 * @s: input pointer to char type
 *    represents the pointer to the
 * @to: input variable of char type
 *    represents the character to
 *    fill s
 *
 * Return: void
 */

void set_string(char **s, char *to)
{
	int i = 0;

	while (to[i] != '\0')
	{
		*(*s + i) = to[i];
		i++;
	}
}
