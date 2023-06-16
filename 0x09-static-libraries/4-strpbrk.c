#include "main.h"
/**
 * _strpbrk - function
 * Description:This function searches a string
 * for any of set of bytes
 * @s:parameter of function
 * @accept:parameter of function
 * Return: pointer
 */
char *_strpbrk(char *s, char *accept)
{
	/*Declaring variable*/
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				return (s + i);
		}
	}
	return (0);
}

