#include <stdio.h>
/**
 * print_array - prints n elements of an array of integers,followed by a new line
 * @a: int array pointer
 * @n: the number of how many elements to be printed
 */
void print_array(int *a, int n)
{
	for (; n != 0; a++, n--)
	{
		printf("%i", *a);
		if (n != 1)
			printf(", ");
	}
	printf("\n");
}
