#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * array_range - function
 * Description:This function creates an array of
 * integers
 * @min:parameter of function
 * @max:parameter of function
 * Return:pointer(success) or NULL(failure)
 */
int *array_range(int min, int max)
{
	int *p;
	unsigned int i, pas = (max - min);

	if (min > max)
		return (0);
	if (min == max)
		pas = 1;
	p = malloc(sizeof(int) * (pas + 1));
	if (p == NULL)
		return (0);
	for (i = 0; i < pas; i++)
		p[i] = min + i;
	return (p);
}
