#include "main.h"
/**
 * _isdigit - function
 * Description:this function
 * checks for a digit (0 through 9).
 * @c:parameter of function
 * Return:1 or 0
 */
int _isdigit(int c)
{
	if (('0' <= c) && ('9' >= c))
		return (1);
	return (0);
}

