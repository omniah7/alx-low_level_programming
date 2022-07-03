#include <stdlib.h>
/**
 * array_range - creates an array of integers
 * @min: the first number
 * @max: the last number
 * Return: the pointer to the newly created array. NULL if fails
 */
int *array_range(int min, int max)
{
	int *p, i;

	if (min > max)
		return (NULL);

	p = malloc((max - min + 1) * sizeof(int));
	if (p != NULL)
	{
		for (i = 0; min <= max; i++, min++)
			p[i] = min;
		return (p);
	}
	free(p);
	return (NULL);
}
