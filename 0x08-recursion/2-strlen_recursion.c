#include "main.h"
/**
 * _strlen_recursion - returns the length of a string
 * @s: a string
 * Return: the length of the string
 */
int _strlen_recursion(char *s)
{
	int l;

	l = 0;
	if (*s > '\0')
		{
			l = _strlen_recursion(s + 1);
			return (++l);
		}
	return (0);
}
