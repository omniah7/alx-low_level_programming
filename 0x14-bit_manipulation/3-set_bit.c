#include "main.h"
/**
* set_bit - sets the value of a bit to 1 at a given index
* @n: the number given
* @index: the index, starting from 0 of the bit you want to set
* Return: 1 if it worked, or -1 if an error occurred
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int q = 1;
	int i = index;

	if (index > 64)
		return (-1);
	while (i--)
	{
		q *= 2;
	}
	*n += q;

	return (1);
}
