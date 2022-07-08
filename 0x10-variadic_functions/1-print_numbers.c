#include "variadic_functions.h"
#include <stdio.h>
/**
* print_numbers - prints numbers, followed by a new line
* @separator: the string to be printed between numbers
* @n: the number of integers passed to the function
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		printf("%ui", va_arg(list, int));
		if (n != 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(list);
}

