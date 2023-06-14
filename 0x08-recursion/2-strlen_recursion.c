#include "main.h"
/**
 * _strlen_recursion - function
 * Description:This function returns the length of a string
 * @s:parameter of function
 * Return: integer
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	if (*(s + 1) == '\0')
		return (1);
	return (_strlen_recursion(s + 1) + 1);
}
