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
	int total, cent[4], i, n;

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
	cent = {2 , 5, 10, 25};
	total = 0;
	for (i = 3; i >= 0;i--)
	{
		if (n % cent[i] == 0)
		{
			n /= cent[i];
			total++;
			i = 3;
		}
		if (i == 0)
		{
			n--;
			total++;
			i = 3;
		}
		if (n == 1)
			break;
	}
		printf("%i\n", total);
		return (0);
}

