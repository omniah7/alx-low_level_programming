#include <stdio.h>
/**
 * main - prints the sum of the even-valued terms in fibonacci sequence
 * Return: 0
 */
int main(void)
{
	long int j, k, sum, even;

	j = 0;
	k = 1;
	even = 0;
	while (sum <= 4000000)
	{
		if (sum % 2 == 0)
			even += sum;
		j = k;
		k = sum;
		sum = j + k;
	}
	printf("%li\n", even);
	return (0);
}
