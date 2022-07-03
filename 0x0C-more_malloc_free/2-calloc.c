#include <stdlib.h>
/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: number of elements
 * @size: size of each of the elements
 * Description: the array is set to zero
 * Return: a pointer to the array. NULL if fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i;

	if ((nmemb || size) == 0)
		return (NULL);

	p = malloc(nmemb * size);
	if (p != NULL)
	{
		for (i = 0; i < nmemb * size; i++)
			p[i] = 0;

		return (p);
	}
	free(p);
	return (NULL);
}
