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

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(nmemb * size);
	if (p != NULL)
	{
		while (nmemb--)
			p[nmemb] = '0';

		return (p);
	}
	free(p);
	return (NULL);
}
