#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates and initializes an array
 * @size:the size of the array
 * @c: a character
 * Description: this function creates an array of chars, and initializes it
 * 		with a specific char
 * Return: a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	p = malloc(size * sizeof(char));
	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			p[i] = c;
		}
		return (p);
	}
	else
		return (NULL);
}
