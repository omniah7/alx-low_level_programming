#include <stdlib.h>
/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: a pointer to the memory previously allocated
 * @old_size: the size, in bytes, of the allocated space for ptr
 * @new_size: the new size, in bytes of the new memory block
 * Return: the pointer to the newly created array. NULL if fails
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;
	unsigned int i;

	if (old_size == new_size)
		return (ptr);

	p = malloc(new_size);
	if (p != NULL)
	{
		if (ptr != NULL)
		{
			for (i = 0; i < new_size && i < old_size; i++)
			p[i] = *((char *) (ptr) + i);
		}
			free(ptr);
			return(p);
	}
	free(ptr);
	return (NULL);
}

