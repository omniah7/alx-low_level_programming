#include <stdio.h>
/**
 * main - prints the sum of the even-valued terms in fibonacci sequence
 * Return: 0
 */
int main(void)
{
	long int i, j, k, sum;

	j = 0;
	k = 1;
	while (sum <= 4000000)
	{
		if (sum % 2 == 0)
		{
			printf("%li", sum);

			printf(", ");
		}
		j = k;
		k = sum;
		sum = j + k;
	}
	printf("\n");
	return (0);
}
