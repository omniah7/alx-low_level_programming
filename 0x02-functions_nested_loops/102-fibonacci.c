#include <stdio.h>
/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 * Return: o
 */
int main(void)
{
	int i, j, k, sum;

	j = 0;
	k = 1;
	for(i = 0; i <= 50; i++)
	{
		sum = j + k;
		printf("%i", sum);
		if (i != 50)
			printf(", ");
		j = k;
		k = sum;
	}
	printf("\n");
	return (0);
}
