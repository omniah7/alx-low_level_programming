#include "main.h"
/**
 * *string_toupper - changes all lowercase letters of a string to uppercase
 * @p: char pointer to a string
 * Return: char pointer to  the string
 */
char *string_toupper(char *p)
{
	int i;

	for (i = 0; p[i] != '\0'; i++)
	{
		if (p[i] >= 97 && p[i] <= 122)
			p[i] -= 32;
	}
}
