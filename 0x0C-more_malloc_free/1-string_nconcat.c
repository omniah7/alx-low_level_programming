#include <stdlib.h>
#include "main.h"
/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of the first bytes of s2
 * Description: returns a pointer to a newly allocated space in
 * memory, which contains s1, followed by the first n bytes of s2,
 * and null terminated
 * If n is greater or equal to the length of s2 then use the entire string s2
 * if NULL is passed, treat it as an empty string
 * Return: a pointer to the concatenated string. Null if fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i,j,l;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	l = length(s1);
	s = malloc((l + n + 1) * sizeof(char));
	if (s != NULL)
	{
		for (i = 0; s1[i] < l; i++)
			s[i] = s1[i];
		if (n >= length(s2))
		{
			for (j = 0; s2[j] != '\0'; j++)
				s[j + l] = s2[j];
			s[j + l] = '\0';
			return (s);
		}
		else
		{
			for (j = 0; j < n; j++)
				s[j + l] = s2[j];
			return (s);
		}
	}
	free (s);
	return (NULL);
}
/**
 * length - finds the length of a string
 * @str: a pointer to the string
 * Return; the length of str
 */
unsigned int length(char *str)
{
	unsigned int i;

	for (i = 0; str[i] != '\0'; i++)
	;
	return (i);
}
