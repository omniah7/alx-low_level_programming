#include <stdio.h>
/**
 * main - prints all possible combinations of single-digit numbers
 * Return: 0
 */
int main(void)
{
	int n;
	int m;

	for (n = 48 ; n <= 57 ; n++)
	{
		for (m = 48 ; m <= 57 ; m++)
		{
			putchar(n);
			putchar(m);
			putchar(',');
			putchar(' ');
		}
	}
	return (0);
}
