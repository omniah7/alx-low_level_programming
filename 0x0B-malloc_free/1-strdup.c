#include <stdlib.h>
/**
 * strdup - returns a pointer to the string copy
 * @str: the string to be copied
 * Description: returns a pointer to a newly allocated space in
 * memory, which contains a copy of the string given as a parameter
 * Return: a pointer to the duplicated string NULL otherwise
 */ 
char *_strdup(char *str)
{
	char *p;
	int i;

	for (i = 0; str[i] != '\0'; i++)
		;
	p = malloc(i * sizeof(char));
	if (p != NULL)
	{
		while (i >= 0)
		{
			p[i] = str[i];
			i--;
		}
		return (p);
	}
	else
		return (NULL);
}
