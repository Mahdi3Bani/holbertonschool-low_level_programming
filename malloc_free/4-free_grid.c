#include "main.h"
/**
 * free_grid - free memory of grid
 * @grid: grid
 * @height: height
 **/
void free_grid(int **grid, int height)
{
int i;

i = 0;
while (i < height)
{
free(grid[i]);
i++;
}
free(grid);
}
