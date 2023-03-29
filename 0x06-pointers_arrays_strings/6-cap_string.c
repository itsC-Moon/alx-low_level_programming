/**
 * cap_string - a function that capitalizes
 *              all words of a string
 *
 * @s: pointer to char input array
 *
 * Return: @s
 */

char *cap_string(char *s)
{
	int flag = 1;
	int i = 0;

	while (s[i])
	{
		if ((s[i] >= 'a' && s[i] <= 'z') && flag)
		{
			s[i] -= 32;
			flag = 0;
		}
		else if (s[i] == ',' || s[i] == ';' || s[i] == '.' || s[i] == '\n' ||
				 s[i] == '!' || s[i] == '?' || s[i] == '"' || s[i] == ' ' ||
				 s[i] == '(' || s[i] == ')' || s[i] == '{' || s[i] == '}' ||
				 s[i] == '\t')
		{
			flag = 1;
		}
		else
			flag = 0;
		++i;
	}
	return (s);
}
