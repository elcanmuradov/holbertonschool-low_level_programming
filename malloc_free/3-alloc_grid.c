#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - function
 * @width: arg1
 * @height: arg2
 * Return: grid
*/
int **alloc_grid(int width, int height)
{
int w = 0, h = 0, **grid;
if (width <= 0 || height <= 0)
{
return (NULL);
}
grid = malloc(width * height * sizeof(int));
if (grid == NULL)
{
return (NULL);
}
while (h < height)
{
while (w < width)
{
grid[h][w] = 0;
}
h++;
w = 0;
}
return (grid);
}
