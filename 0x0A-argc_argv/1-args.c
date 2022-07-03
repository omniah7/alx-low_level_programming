#include <stdio.h>
/**
 * main - prints the number of arguments passed into it
 * @argc: arguments count
 * @argc: arguments vector
 * Return: 0 on success
*/
int main(int argc, char **argv)
{
	(void) argv;

	printf("%i\n", argc - 1);
	return (0);
}
