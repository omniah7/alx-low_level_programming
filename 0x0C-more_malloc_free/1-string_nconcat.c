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
	unsigned int i, l;
	char *p;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (l = 0; s1[l] != '\0'; l++)
	;
	p = malloc((l + n + 1) * sizeof(char));
	if (p != NULL && (s1 != "" || s2 != ""))
	{
		for (i = 0; i < l; i++)
			p[i] = s1[i];

		for (--n, i = 0; i <= n && s2[i] != '\0'; i++)
			p[i + l] = s2[i];

		p[i + l] = '\0';
		return (p);
	}
	free(p);
	return (NULL);
}
