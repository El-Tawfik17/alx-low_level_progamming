#include "main.h"
/**
 * _strncat - function
 * Description:This function appends the src
 * string to the dest string, overwriting the
 * terminating null byte (\0) at the end of dest,
 * and then adds a terminating null byte
 * @dest:paramater of function
 * @src:paramater of function
 * @n:paramater of function
 * Return:pointer
 */
char *_strncat(char *dest, char *src, int n)
{
	/*declaring variable and initilization*/
	int i = 0;
	/*declaring pointer*/
	char *p;
	/*intialization*/
	p = dest;
	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0' && i < n)
	{
		*dest = *src;
		dest++;
		src++;
		i++;
	}
	*(dest--) = '\0';
	return (p);
}
