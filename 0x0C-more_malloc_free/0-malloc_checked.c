#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - function
 * Description:function that allocates memory using malloc.
 * @b:parameter of function
 * Return:pointer
 */
void *malloc_checked(unsigned int b)
{
	int *mem;

	mem = malloc(b);
	if (mem == NULL)
		exit(98);
	return (mem);
}
