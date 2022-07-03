#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers
 * @argc: arguments count
 * @argv: arguments vector
 * Return: 0 on success. 1 if fails
 */
int main(int argc, char **argv)
{
	if ((argc - 1) == 2)
	{
		printf("%i\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
