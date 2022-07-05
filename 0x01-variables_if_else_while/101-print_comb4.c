#include <stdio.h>
/**
 * main - prints all possible different combinations of three digits
 * Description: Numbers must be separated by , followed by a space
 * The three digits must be different 012, 120, 102, 021, 201, 210
 * are considered the same combination of the three digits 0, 1 and 2
 * Print only the smallest combination of three digits
 * Numbers should be printed in ascending order, with three digits
 * You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
 * You can only use putchar six times maximum in your code
 * You are not allowed to use any variable of type char
 * Return: 0
 */
int main(void)
{
	int n, m, k;

	/* like n from 0 to 9 */
	for (n = '0'; n <= '9'; n++)
	{
		/* m from 1 to 9 */
		for (m = n + 1; m <= '9'; m++)
		{
			/* k from 2 to 9 */
			for (k = m + 1; k <= '9'; k++)
			{
				putchar(n);
				putchar(m);
				putchar(k);
				/* if not the last number */
				if (!(n == '7' && m == '8' && k == '9'))
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
