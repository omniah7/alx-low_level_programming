#include "main.h"
/**
* binary_to_uint -  converts a binary number to an unsigned int
* @b: is pointing to a string of 0 and 1 chars
* Return: the converted number, or 0 if
* there is one or more chars in the string b that is not 0 or 1
* b is NULL
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int sum = 0, i, l, n;

	if (b == NULL)
		return (0);
	for (l = 0; b[l] != '\0'; l++)
	{
		if (!(b[l] == '0' || b[l] == '1'))
			return (0);
	}

	for (n = l, i = 0; n > 0; n--, i++)
	{
		sum += expo_to_bin((unsigned int)(b[i] - '0'), 2, (l - i - 1));
	}
	return (sum);
}
unsigned int expo_to_bin(unsigned int n, unsigned int base, unsigned int index)
{
	unsigned int i, result = base;

	if (index == 0)
		return (n);
	for (i = 1; i < index; i++)
	{
		result *= base;
	}
	return (n * result);
}

