#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabet in lowercase
 */
void print_alphabet_x10(void)
{
	int n;

	n = 10;
	while (n)
	{
		for (i = 97 ; i <= 122 ; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
		n--;
	}
}
