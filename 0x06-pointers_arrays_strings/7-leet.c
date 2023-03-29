/**
 * leet - a function that encodes a string into 1337
 *
 * @s: string input
 *
 * Return: @s
 */

char *leet(char *s)
{
	char wan[] = "aeotl";
	char dat[] = "43071";
	int i = 0;
	int j = 0;

	while (s[i])
	{
		j = 0;
		while (wan[j])
		{
			if (wan[j] == s[i] || wan[j] - 32 == s[i])
				s[i] = dat[j];
			++j;
		}
		++i;
	}

	return (s);
}
