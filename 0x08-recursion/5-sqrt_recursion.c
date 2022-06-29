#include "main.h"
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number
 * Return: the natural square root if exists. -1 if not 
 */
int _sqrt_recursion(int n)
{
	return (square(n, 1));
}
/**
 * sqrt - returns the natural square root of a number
 * @n: the number
 * @g: a guess number
 * Return: the natural square root if exists. -1 if not
 */
int square(int n, int g)
{
		if (g * g == n)
			return (g);
		else if (g * g < n)
			return (square(n, g + 1));
		else
			return (-1);
}
