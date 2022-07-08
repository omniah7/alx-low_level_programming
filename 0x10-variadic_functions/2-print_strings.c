#include "variadic_functions.h"
#include <stdio.h>
/**
*  - prints strings, followed by a new line
* @separator: the string to be printed between numbers
* @n: the number of strings passed to the function
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	char *s;

	va_start(list, n);
	for (i = 0; i < n; i++, s = va_arg(list, char*))
	{
		if (s == NULL)
			printf("nil");
		else
			printf("%s", s);

		if (separator != NULL && i != (n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(list);
}

