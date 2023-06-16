#include "main.h"
/**
 * _abs - function
 * Description:This function checks sign
 * it return 1 if it is postive and 0 or -1 otherwhise
 * @n:is parameter for our function
 * Return:1 -1  or 0
 */
int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	} else if (n < 0)
	{
		return (-n);
	}
		return (0);
}
