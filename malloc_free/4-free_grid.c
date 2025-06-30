#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Frees a 2D grid previously created by alloc_grid.
 * @grid: The 2D array to free.
 * @height: The height (number of rows) of the grid.
 *
 * Return: Nothing.
 */
void free_grid(int **grid, int height)
{
int h;
if (grid == NULL || height <= 0)
return;
for (h = 0; h < height; h++)

free(grid[h]);
}
free(grid);
}
