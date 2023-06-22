#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - function
 * Description:function that frees a 2 dimensional
 * grid previously created by your alloc_grid function.
 * @grid:parameter of function
 * @height:parameter of function
 * Return:Nothing
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
}
