#include "function_pointers.h"
/**
* array_iterator - executes a function on each element of an array
* @array: an int array
* @size: is the size of the array
* @action: is a pointer to the function you need to use
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (action != NULL)
		for (i = 0; (size_t) i < size; i++)
			action(array[i]);
}
