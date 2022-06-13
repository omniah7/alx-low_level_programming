#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: the char type pointer
 * Return: the string length
 */
int _strlen(char *s)
{
	int c;

	c = 0;
	while (*s != '\0')
	{
		s++;
		c++;
	}
	return (c);
}
