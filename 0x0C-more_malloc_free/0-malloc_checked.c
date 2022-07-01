#include <stdlib.h>
#include <unistd.h>
/**
 * malloc_checked - allocates memory using malloc
 * @b: an unsigned int
 * Return: a pointer to the allocated memory
 */
 void *malloc_checked(unsigned int b)
 {
 	void *p;
 
 	if (b > 0)
 	{
 		p = malloc(b);
 		return (b);
 	}
 	_exit(98);
 }
