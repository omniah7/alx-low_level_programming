#include "main.h"
/**
 * print_times_table - prints the n times table, starting with 0
 * @n: the number
 */
void print_times_table(int n)
{
	int j, i, d1, d2, d3;
	
	if (!(n > 15 || n < 0))
	{
		for (j = 0; j <= n; j++)
		{
			for (i = 0; i <= n; i++)
			{
				d1 = ((i * j) % 1000) / 100;
				d2 = ((i * j) % 100) / 10;
				d3 = (i * j) % 10;

				if (i != 0)
				{
					if (d1 == 0)
						_putchar(' ');
					else
						_putchar(d1 + '0');

					if (d2 == 0 && d1 == 0)
						_putchar(' ');
					else
						_putchar(d2 + '0');
				}
				_putchar(d3 + '0');
				if (i != n)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
