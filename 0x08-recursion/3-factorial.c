#include "main.h"
/**
 * factorial - function
 * Description:This function return the factorial
 * of a given number
 * @n:parameter of function
 * Return: integer
 */
int factorial(int n)
{
	if (n == 0)
		return (1);
	else if (n < 0)
		return (-1);
	return (n + factorial(n - 1));
}
