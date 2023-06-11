#include "main.h"
/**
 * _strlen - function
 * Description : this function return the string lenght
 * @s: parameter of function
 * Return : 0
 */
int _strlen(char *s)
{
	/*declaring variable*/
	int cmp;
	/*counting*/
	while (*s != '\0')
	{
		cmp++;
		s++;
	}
	return (cmp);
}
