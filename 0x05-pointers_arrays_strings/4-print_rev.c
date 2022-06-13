#include "main.h"
/**
 * print_rev - prints a string in reverse,followed by a new line
 * @s: char type pointer
 */
void print_rev(char *s)
{
	int l;

	while (*s != '\0')
		s++;
	for (s--; *s != '\0'; s--)
		_putchar(*s);
}
