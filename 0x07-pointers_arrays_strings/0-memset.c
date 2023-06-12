#include "main.h"
/**
 * _memset - function
 * Description:this function
 * fills memory with a constant byte.
 * @s:parameter of function
 * @b:parameter of function
 * @n:parameter of function
 * Return:pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	/*Declaring variable*/
	int i;

	for (i = 0; i < n; i++)
		*(s + i) = b;
	return (s);
}
