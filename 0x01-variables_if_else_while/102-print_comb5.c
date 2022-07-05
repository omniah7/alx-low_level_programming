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
	int n1, n2, m1, m2;

	for (n1 = 0 ; n1 <= 9 ; n1++)
	{
	for (n2 = 0 ; n2 <= 9 ; n2++)
	{
	for (m1 = n1  ; m1 <= 9 ; m1++)
	{
		if (m1 == n1)
			m2 = n2 + 1;
		else
			m2 = 0;
		while (m2 <= 9)
		{
			putchar(n1 + '0');
			putchar(n2 + '0');
			putchar(' ');
			putchar(m1 + '0');
			putchar(m2 + '0');
			if (!(n1 == 9 && n2 == 8 && m1 == 9 && m2 == 9))
			{
				putchar(',');
				putchar(' ');
			}
			m2++;
		}
	}
	}
	}
	putchar('\n');
	return (0);
}
