#include "main.h"
#include <stdio.h>
/**
* print_binary - prints the binary representation of a number
* @n: an unsigned long int number
*/
void print_binary(unsigned long int n)
{
	unsigned long int tmp;
	int len = 0;

	for (tmp = n; (tmp >>= 1) > 0; len++)
		;
	for (; len >= 0; len--)
	{
		if ((n >> len) & 1)
			printf("1");
		else
			printf("0");
	}
}
