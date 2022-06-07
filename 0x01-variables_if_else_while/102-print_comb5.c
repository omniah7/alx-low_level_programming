#include <stdio.h>
/**
 * main - prints all possible different combinations of two digits
 * Return: 0
 */
int main(void)
{
	int n, m, k, l;

	for (n = 0 ; n <= 9 ; n++)
	{
		for (m = 0 ; m <= 9 ; m++)
		{
			for (k = 0  ; k <= 9 ; k++)
			{
				for (l = 0 ; l <= 9 ; l++)
				{
					if (!(n == k && m == l))
					{
						putchar(n + '0');
						putchar(m + '0');
						putchar(' ');
						putchar(k + '0');
						putchar(l + '0');
						/* if not the last number */
						if (n != 9 || m != 8 || k != 9 || l != 9)
						{
						putchar(',');
						putchar(' ');
						}
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
