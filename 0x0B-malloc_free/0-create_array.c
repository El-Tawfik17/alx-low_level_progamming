#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * create_array -  function
 * Description:this function that creates an array
 * of chars, and initializes it with a specific char.
 * @size:size of array
 * @c:charater to initialize array
 * Return:NULL(failure) or pointer(success)
 */
char *create_array(unsigned int size, char c)
{
	char *str = NULL;
	unsigned int i;

	str = malloc(sizeof(char) * size);
	if (str == NULL || size == 0)
	{
		return (0);
	}
	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);
}
