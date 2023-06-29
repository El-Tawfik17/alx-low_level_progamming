#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _copyto - function
 * Description:This function copy from the old
 * array to the new
 * @p:paameter of function
 * @pp:paameter of function
 * @size:paameter of function
 * Return:nothing
 */
void _copyto(void *p, void *pp, unsigned int size)
{
	unsigned int i;

	char *pt = (char *)p;
	char *ppt = (char *)pp;

	for (i = 0; i < size; i++)
		pt[i] = ppt[i];
}
/**
 * _realloc - function
 * Description:This function reallocates a memory block
 * using malloc and free
 * @ptr:parameter of function
 * @old_size:parameter of function
 * @new_size:parameter of function
 * Return:pointer(success) or NULL(failure)
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *nptr;

	if (old_size == new_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (0);
	}
	nptr = malloc(new_size);
	if (nptr == NULL)
		return (0);
	if (old_size < new_size && ptr != NULL)
		_copyto(ptr, nptr, old_size);
	else if (old_size > new_size && ptr != NULL)
		_copyto(ptr, nptr, new_size);
	free(ptr);
	return (nptr);
}
