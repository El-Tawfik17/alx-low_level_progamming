#include "main.h"
/**
 * print_last_digit - function
 * Description:This function checks sign
 * it return 1 if it is postive and 0 or -1 otherwhise
 * @n:is parameter for our function
 * Return:1 -1  or 0
 */
int print_last_digit(int n)
{
	/*Declaring variable*/
	int result;
	/*initialization*/
	result = n % 10;
	if (result < 0)
		result = (-1 * result);
	_putchar(result + '0');
	return (result);
}
