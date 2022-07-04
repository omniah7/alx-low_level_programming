#include <stdio.h>
#include <stdlib.h>
/**
 * main - adds positive numbers
 * @argc: arguments count
 * @argv: arguments vector
 * Return: 0 on success. 1 if fails
 */
int main(int argc, char **argv)
{
	int total, cent[5], i, n;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	n = atoi(argv[1]);
	if (n <= 0)
	{
		printf("0\n");
		return (0);
	}
	cent[0] = 1;
	cent[1] = 2;
	cent[2] = 5;
	cent[3] = 10;
	cent[4] = 25;
	total = 0;
	for (i = 4; i >= 0;i--)
	{
		if (n >= cent[i])
		{
			total += (n - (n % cent[i])) / cent[i];
			n %= cent[i];
		}
		if (n == 0)
			break;
	}
	printf("%i\n", total);
	return (0);
}

