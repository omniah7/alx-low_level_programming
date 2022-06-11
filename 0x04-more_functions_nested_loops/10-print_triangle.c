#include <stdio.h>
/**
 * print-triangle - prints a triangle, followed by a new line
 * @size: the size of the triangle
 * Return: 0
 */
void print_triangle(int size)
{
	int size, i, k, j;

	for(i=1; i <= size; i++)
	{
		for(j=1; j <= size-i; j++)
			putchar(' ');

		for(k=1; k <= i ; k++)
			putchar('#');

		putchar('\n');
	}

	return (0);
}
