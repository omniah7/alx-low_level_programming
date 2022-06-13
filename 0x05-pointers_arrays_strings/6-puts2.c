#include "main.h"
/**
 * puts2 - prints every other character of a string, followed by a new line
 * @str: char type pointer
 */
void  puts2(char *str)
{
  int i;
  
	for (i = 0; i % 2 == 0 && *str != '\0'; i++, str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
