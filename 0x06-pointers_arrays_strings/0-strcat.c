#include "main.h"
/**
 * _strcat - function
 * Description:This function appends the src
 * string to the dest string, overwriting the
 * terminating null byte (\0) at the end of dest,
 * and then adds a terminating null byte
 * @dest:paramater of function
 * @src:paramater of function
 * Return:pointer
 */
char *_strcat(char *dest, char *src)
{
	/*declaring pointer*/
	char *p;
	/*intialization*/
	p = dest;
	while (*dest != '\0')
	{
		cmp++;
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*(dest--) = '\0';
	return (p);
}
