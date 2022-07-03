#include <stdio.h>
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
		printf("%i\n",(int *)argv[1] * (int *)argv[2]);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
