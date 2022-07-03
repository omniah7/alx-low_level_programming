#include <stdio.h>
#include <stdlib.h>
/**
 * check - checks wether the string is int
 * @c: a pointer to the string
 * Return: 1 if it's an integer. 0 if not
 */
int check(char *c)
{
	int i;

	for (i = 0; c[i] != '\0'; i++)
	{
		if (c[i] > '9' || c[i] < '0')
			return (0);
	}
	return (1);
}
/**
 * main - adds positive numbers
 * @argc: arguments count
 * @argv: arguments vector
 * Return: 0 on success. 1 if fails
 */
int main(int argc, char **argv)
{
	int sum, i;

	for (sum = 0, i = 1; i < argc; i++)
		{
			if (check(argv[i]))
				sum += atoi(argv[i]);
			else
			{
				printf("Error\n");
				return (1);
			}
		}
	printf("%i\n", sum);
	return (0);
}
