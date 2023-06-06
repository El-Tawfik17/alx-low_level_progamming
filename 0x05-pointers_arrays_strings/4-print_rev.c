#include "main.h"
/**
 * print_rev - function print string in reverse
 * @s:is paramater
 * Return:0
 */
void print_rev(char *s)
{
	int i, fcounter = 0, n;


	for (i = 0; *(s + i) != '\0'; i++)
	{
		fcounter++;
	}
	for (n = (fcounter - 1); n >= 0; n--)
	{
		_putchar(*(s + n));
	}
	_putchar('\n');
}
