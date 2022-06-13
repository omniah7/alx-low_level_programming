#include "main.h"
/**
 * rev_string - reverses a string
 * @s: char type pointer
 */
void rev_string(char *s)
{
	int l, i;
	char tmp;

	l = 0;
	while (*s != '\0')
		l++;
 
	for (i = 0; i < l / 2; i++)
	{
		tmp = *s;
		/* value = corresponding value in the array*/
		*s = *(s + (l - 1 - 2 * i);
		*(s + l - 1 - 2 * i) = tmp;
		s++;
	}
}
