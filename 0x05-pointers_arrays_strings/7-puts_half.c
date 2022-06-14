#include "main.h"
/**
 * puts_half - that prints half of a string, followed by a new line
 * @str: char type pointer
 */
void puts_half(char *str)
{
	int l;

	for (l = 0; str[l] != '\0'; l++);
	if (l % 2 != 0)
		l--;
	for (str += l/2; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
