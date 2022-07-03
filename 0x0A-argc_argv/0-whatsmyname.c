#include <stdio.h>
/**
 * main - prints the program's name, followed by a new line
 * @argc: arguments count
 * @argv: arguments vector
 * Return: 0 on success
 */
int main(int argc, char **argv)
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
