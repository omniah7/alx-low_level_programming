#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: the width of the array
 * @height: the height of the array
 * Description: Each element of the grid should be initialized to 0
 * If width or height is 0 or negative, return NULL
 * Return: a pointer to the array. NULL if fails
 */
int **alloc_grid(int width, int height)
{
	int **p, i, j;

	if (width > 0 && height > 0)
	{ 
		p = malloc(width * height * sizeof(int));
		if (p != NULL)
		{
			for (i = 0; i < height; i++)
			{
				for (j = 0; j < width; j++)
				{
					p[i] [j] = 0;
				}
			}
			return (p);
		}
		return (NULL);
	}
	return (NULL);
}
