#include "main.h"
/**
 * _strncpy - function
 * Description: thyis function copies a string
 * @dest:parameter of function
 * @src:parameter of function
 * @n:parameter of function
 * Return:pointer
 */
char *_strncpy(char *dest, char *src, int n)
{
	/*declaring variable*/
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
