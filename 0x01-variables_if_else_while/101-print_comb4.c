#include <stdio.h>
/**
 * main - prints all possible different combinations of two digits
 * Return: 0
 */
int main(void)
{
	int n, m, k;

	/* like n from 0 to 9 */
	for (n = 48 ; n <= 57 ; n++)
	{
		/* m from 1 to 9 */
		for (m = n + 1 ; m <= 57 ; m++)
		{
			/* k from 2 to 9 */
			for (k = m + 1 ; k <= 57 ; k++)
			{
				putchar(n);
				putchar(m);
				putchar(k);
				/* if the last number */
				if (n != 55 || m != 56 || k != 57)
				{
				putchar(',');
				putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
