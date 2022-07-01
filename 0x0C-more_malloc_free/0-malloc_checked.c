#include <stdlib.h>
/**
 * malloc_checked - allocates memory using malloc
 * @b: an unsigned int
 * Description: if malloc fails, the malloc_checked function should
 * cause normal process termination with a status value of 98
 * Return: a pointer to the allocated memory
 */
 void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);

	if (p != NULL)
		return (b);

	exit(98);
}

