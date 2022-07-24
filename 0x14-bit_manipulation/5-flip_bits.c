#include "main.h"
/**
* flip_bits - returns the number of bits to flip to get from number to another
* @n: first number
* @m: second number
* Return: returns the number of bits you would need 
* to flip to get from one number to another
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m;
	unsigned int count = 0;

	while (xor != 0)
	{
		if ((xor & 1) == 1)
			count++;
		xor = xor >> 1;
	}
	return (count);
}
