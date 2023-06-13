#include "holberton.h"

/**
 * _memcpy - function
 * Description:This function copies memoy area
 * @dest:parameter of function
 * @src:parameter of function
 * @n:parameter of function
 * Return:pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	/*declaring variable*/
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (0);
}
