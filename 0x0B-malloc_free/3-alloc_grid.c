#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * alloc - function
 * Description:function that returns a pointer
 * to a 2 dimensional array of integers.
 * @width:parameter of function
 * @height:parameter of function
 * Return:pointer(success) or NULL(failure)
 */
int **alloc_grid(int width, int height)
{
	/*declaring variable*/
	int i, j, **tab;

	if (height <= 0 || width <= 0)
		return (0);

	tab = malloc(sizeof(int *) * height);
	if (tab == NULL)
		return (0);
	for (i = 0; i < height; i++)
	{
		tab[i] = malloc(sizeof(int) * width);
		if (tab[i] == NULL)
			return (0);
	}
	/*intialization*/
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			tab[i][j] = 0;
		}
	}
	return (tab);
}
