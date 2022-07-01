#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1: a pointer to the first string
 * @s2: a pointer to the second string
 * Description:The returned pointer should point to a newly
 * allocated space in memory which contains the contents of s1,
 * followed by the contents of s2, and null terminated
* if NULL is passed, treat it as an empty string
 * Return: a pointer to the concatenated string.  NULL otherwise
 */
char *str_concat(char *s1, char *s2)
{
	char *p;
	int i, j;

	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;
	if (s1 != NULL || s2 != NULL)
	{
		p = malloc((i + j + 1) * sizeof(char));
		if (p == NULL)
			return (NULL);
		j += i;
		for (--i; j >= 0; j--)
		{
			p[j] = s2[j];
			if (j == 0)
			{
				j = i;
				i = -1;
			}
		}
		return (p);
	}
	else
		return (NULL);
}
