
/**
 * *cap_string - capitalizes all words of a string
 * @p: char pointer to a string
 * Return: char pointer to the string
 */
char *cap_string(char *p)
{
	int i, j;
	char sep[] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '(', ')', '{', '}'}

	for (i = 0; p[i] != '\0'; i++)
	{
			for (j = 0; sep[j] != '\0'; j++)
			{
				if (i == 0)
					p[i] -= 32;

				if (p[i] == sep[j])
				{
					if (p[i + 1] >= 'a' && p[i + 1] <= 'z')
					{
						p[i + 1] -= 32;
						continue;
					}
				}
			}
	}
	return (p);
}
