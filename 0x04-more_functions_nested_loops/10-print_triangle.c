#include "main.h"
/**
 * print-triangle - prints a triangle, followed by a new line
 * @size: the size of the triangle
 * Return: 0
 */
void print_triangle(int size)
{
	int i, k, j;

	for (i = 1; i <= size; i++)
	{
		for (j = 1; j <= size - i; j++)
			_putchar(' ');

		for (k = 1; k <= i ; k++)
			_putchar('#');

		_putchar('\n');
	}
if (size <= 0)
_putchar('\n');
}
