#include "main.h"
/**
 * _strspn - function
 * Description:This function gets the length
 * of a prefix substring
 * @s:parameter of function
 * @accept:parameter of function
 * Return:int
 */
unsigned int _strspn(char *s, char *accept)
{
	/*Declaring  variable*/
	unsigned int i, j, cmp, boolean;

	for (i = 0; s[i] != '\0'; i++)
	{
		boolean = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				cmp++;
				boolean = 1;
			}
		}
		if (!boolean)
			return (cmp);
	}
	return (cmp);
}

