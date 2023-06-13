#include "main.h"
/**
 * _strchr - function
 * Description:This function locates a character in a string.
 * @s:parameter of function
 * @c:parameter of function
 * Return:pointer or NULL
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	return (NULL);
}

