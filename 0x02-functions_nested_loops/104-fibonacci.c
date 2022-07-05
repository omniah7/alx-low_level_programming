#include <stdio.h>
/**
 * main - prints the first 98 Fibonacci numbers, starting with 1 and 2
 * Description: The numbers should be separated by comma, followed by a space
 * You are not allowed to use long long, malloc, pointers, arrays/tables, or structures
 * You are not allowed to hard code any Fibonacci number (except for 1 and 2)
 * Return: 0
 */
int main(void)
{
	int i, j, k, sum;

	j = 1;
	k = 2;
	sum = 0;
	i = 0;
	printf("1, 2, ");
	while (i < 96)
	{	
		sum = j + k;
		j = k;
		k = sum;
		printf("%i", sum);
		if (i != 95)
			printf(", ");
		i++;
	}
	printf("\n");
	return (0);

}
