#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
* main - prints the result of the operation, followed by a new line
* @argc: arguments count
* @argv: argument vector
*
* Description: if the number of arguments is wrong, print Error
* and exit with the status 98
* Otherwise print Error, and exit with the status 99
* if the user tries to divide (/ or %) by 0,
* print Error, and exit with the status 100
* Return: 0
*/
int main(int argc, char **argv)
{
	int a, b;
	char *o;
	

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	o = argv[2];

	if (b == 0 && (*o == '/' || *o == '%'))
	{
		printf("Error\n");
		exit(100);
	}


	if (get_op_func(o) == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	else
		printf("%i\n", get_op_func(o)(a, b));
	return (0);
}

