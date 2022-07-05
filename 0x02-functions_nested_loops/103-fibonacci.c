#include <stdio.h>
/**
 * main - prints the sum of the even-valued terms in fibonacci sequence
 * Return: 0
 */
int main(void)
{
	int j, k, sum, even;

	j = 0;
	k = 1;
	even = 0;
	sum = 0;
	while (sum < 4000000)
	{
		if (sum % 2 == 0)
			even += sum;

		sum = j + k;
		j = k;
		k = sum;

	}
	printf("%i\n", even);
	return (0);
}
