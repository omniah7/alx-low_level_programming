#include "variadic_functions.h"
/**
* sum_them_all - returns the sum of all its parameters
* @n: the number of parameters
* Return: the sum. 0 if n = 0
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list va;
	unsigned int sum;

	sum = 0;
	va_start(va, n);
	while (n--)
	{
		sum += va_arg(va, int);
	}
	va_end(va);
	return (sum);
}

