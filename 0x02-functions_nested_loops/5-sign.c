#include "main.h"
/**
 * print_sign - function
 * Description:This function checks sign
 * it return 1 if it is postive and 0 or -1 otherwhise
 * @n:is parameter for our function
 * Return:1 -1  or 0
 */
int _print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}else
	{
		_putchar('0');
		return (0);
	}
}
