#include "stdio.h"
/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: the start number
 */
void print_to_98(int n)
{
	for (; n <= 98; n++)
	{
		printf("%i",n);
		if (n != 98)
			printf(", ");
	}

}
