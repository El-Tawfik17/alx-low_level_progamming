#include "main.h"
/**
 * _isupper - function
 * Description:this function
 * checks for uppercase character.
 * @c:parameter of function
 * Return:1 or 0
 */
int _isupper(int c)
{
	if (('A' <= c) && ('Z' >= c))
		return (1);
	return (0);
}

