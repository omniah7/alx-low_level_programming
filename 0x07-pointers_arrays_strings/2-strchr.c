/**
 * *_strchr -  locates a character in a string
 * @s: pointer to the string
 * @c: the char to be searched
 * Return: a pointer to the first occurrence of the character c
 * in the string s. NULL if the character is not found
 */
 char *_strchr(char *s, char c)
 {
 	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (s + i);
		i++;
	}
	return ('\0');
 }
