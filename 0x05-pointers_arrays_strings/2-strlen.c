#include "main.h"
/**
 * _strlen - function calculate length of string
 * @s:is paramater
 * Return:0
 */
int _strlen(char *s)
{
	int x = 0;

	while (*s != '\0')
	{
		x++;
		s++;
	}
	return (x);
}
