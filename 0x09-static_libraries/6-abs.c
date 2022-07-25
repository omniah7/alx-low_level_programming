#include "main.h"
/**
 * _abs - computes the absolute value of an integer
 * @n: the integer
 * Return: the absolute value
 */
int _abs(int n)
{
	if (n < 0)
		return (n * -1);
	else
		return (n);
}
