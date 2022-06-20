/**
 * _strspn - gets the length of a prefix substring
 * @s: pointer to the string
 * @accept: pointer to characters to be matched
 * Return: number of bytes in the initial segment of s
 * which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	unsigned int b;

	b = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				break;
		}
		if (accept[j] == '\0')
			return (b);
		b++;
	}
	return (b);
}
