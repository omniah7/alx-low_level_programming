#include "main.h"
/**
 * factorial - returns the factorial of a given number
 * @n: the given number
 * Return: the factorial. -1 if (n<0)
 */
int factorial(int n)
{
	int l;

	l = 0;
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	l = factorial(n - 1);
	return (n * l);
}
