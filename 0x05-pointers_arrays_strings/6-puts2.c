#include "main.h"
/**
 * puts2 - prints every other character of a string, followed by a new line
 * @str: char type pointer
 */
void  puts2(char *str)
{
  int i;
  
	for (i = 0; *str != '\0'; i++)
	{
		if (i % 2 == 0)
			_putchar(*str);
		str++
	}
	_putchar('\n');
}
