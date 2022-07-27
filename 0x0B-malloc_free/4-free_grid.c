#include "main.h"
#include <stdlib.h>
/**
 * free_grid -> function that frees a 2 dimensional of numners.
 * @grid: The array that must be freed.
 * @height: The height of a grid.
 */
void free_grid(int **grid, int height)
{
int i = 0;

for (; i < height; i++)
	free(grid[i]);
free(grid);
}
