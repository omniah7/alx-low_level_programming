#include "main.h"
/**
 * times_table - prints the 9 times table, starting with 0
 */
void times_table(void)
{
	int n, i, d1, d2; 

	for (n = 0; n <= 9; n++)
	{
		for (i = 0; i <= 9; i++)
		{
			d1 = (i * n) / 10;
			d2 = (i * n) % 10;
			/* if it's not one digit and not the first product */
			if (d1 != 0)
				_putchar(d1 + '0');
			else if (i == 0)
				;
			else
				_putchar(' ');
			_putchar(d2 + '0');
			if (i != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
