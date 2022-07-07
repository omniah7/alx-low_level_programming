#include "function_pointers.h"
/**
* print_name - prints a name
* @name: a pointer to the string name
* @f: a function pointer
*/
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		f(name);
}
