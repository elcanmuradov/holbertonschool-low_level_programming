#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Allocates a 2D array of integers initialized to 0.
 * @width: The width (number of columns) of the grid.
 * @height: The height (number of rows) of the grid.
 * Return: A pointer to the allocated 2D array, or NULL on failure.
 */
int **alloc_grid(int width, int height)
{
int **grid;
int h, w;

if (width <= 0 || height <= 0)
return (NULL);

/* Allocate memory for the row pointers */
grid = malloc(height * sizeof(int *));
if (grid == NULL)
return (NULL);

/* Allocate memory for each row and initialize to 0 */
for (h = 0; h < height; h++)
{
grid[h] = malloc(width * sizeof(int));
if (grid[h] == NULL)
{
/* Free previously allocated memory on failure */
while (h >= 0)
{
free(grid[h]);
h--;
}
free(grid);
return (NULL);
}

/* Initialize each element to 0 */
for (w = 0; w < width; w++)
grid[h][w] = 0;
}

return (grid);
}
