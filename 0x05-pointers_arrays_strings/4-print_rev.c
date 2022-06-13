#include "main.h"
/**
 * print_rev - prints a string in reverse,followed by a new line
 * @s: char type pointer
 */
void print_rev(char *s)
{
	int l;

	l = strlen(*s);
	s += (l-1);
	for (; *s != '\0'; s--)
		_putchar(*s);
}
