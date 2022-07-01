#include <stdlib.h>
/**
 * free_grid - frees a 2 dimensional grid
 * @grid: a pointer to the 2d array
 * @height: the height if the array
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
