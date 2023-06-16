#include "main.h"
/**
 * _puts - function
 * Description:this function prints string
 * @str:parameter of function
 * Return:Nothing
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
