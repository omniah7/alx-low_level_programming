#include "variadic_functions.h"
#include <stdio.h>
/**
* strFunc - prints the string argument
* @list: a va_list macro
*/
void strFunc(va_list list)
{
	char *s = va_arg(list, char*);

	if (s == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", s);
}

/**
* intFunc -  prints the int argument
* @list: a va_list macro
*/
void intFunc(va_list list)
{
	printf("%i", va_arg(list, int));
}

/**
* floatFunc -  prints the float argument
* @list: a va_list macro
*/
void floatFunc(va_list list)
{
	printf("%f", va_arg(list, double));
}

/**
* charFunc -  prints the char argument
* @list: a va_list macro
*/
void charFunc(va_list list)
{
		printf("%c", va_arg(list, int));
}

/**
* print_all - prints anything, followed by a new line
* @format: a list of types of arguments passed to the function
* Descriptiostring: c: char
*					i: integer
*					f: float
*					s: char *
* (if the string is NULL, print (nil) instead
* You can use a maximum of
* 2 while loops
* 2 if
* You can declare a maximum of 9 variables
*/
void print_all(const char * const format, ...)
{
	int i, j;
	va_list list;
	char *sep = "";
	FunType structs[] = {
						{'s', strFunc},
						{'c', charFunc},
						{'i', intFunc},
						{'f', floatFunc}
	};

	va_start(list, format);
	i = 0;
	while (format[i] != '\0' && format != NULL)
	{
		j = 0;
		while (j < 4)
		{
			if (format[i] == structs[j].t)
			{
				printf("%s", sep);
				structs[j].f(list);
				sep = ", ";

			}
			j++;
		}
		i++;
	}
	va_end(list);
	printf("\n");
}

