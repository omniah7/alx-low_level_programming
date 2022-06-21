/**
 * *_strstr - locates a substring
 * @haystack: pointer to a string
 * @needle: array of characters to be matched
 * Return: a pointer to the beginning of the located substring.
 *			NULL if no such byte is found
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i] == needle[j])
			{
				
			}
		}
	}
}
