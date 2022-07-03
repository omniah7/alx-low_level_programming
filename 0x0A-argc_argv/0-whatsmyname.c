#include <stdio.h>
/**
 * main - prints the program's name, followed by a new line
 * @argc: arguments count
 * @argc: arguments vector
 * Return: 0 on success
*/
int main(int argc, char **argv)
{
	printf("%s\n", argv[argc -1]);
}
