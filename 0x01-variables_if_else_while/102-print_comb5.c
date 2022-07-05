#include <stdio.h>
/**
 * main - prints all possible different combinations of two two-digits
 * Description: The numbers should range from 0 to 99
 * The two numbers should be separated by a space
 * All numbers should be printed with two digits. 1 should be printed as 01
 * The combination of numbers must be separated by comma, followed by a space
 * The combinations of numbers should be printed in ascending order
 * 00 01 and 01 00 are considered as the same combination of the numbers 0 and 1
 * You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
 * You can only use putchar eight times maximum in your code
 * You are not allowed to use any variable of type char
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
				if ( n <= k && m <= l)
				{
					for (l = 0 ; l <= 9 ; l++)
					{
						if (!(n == k && m == l))
						{
                                   			if ( n <= k && m <= l)
							{
								putchar(n + '0');
								putchar(m + '0');
								putchar(' ');
								putchar(k + '0');
								putchar(l + '0');
								/* if not the last number */
								if (!(n == 9 && m == 8 && k == 9 && l == 9))
								{
									putchar(',');
									putchar(' ');
								}
							}
						}
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
