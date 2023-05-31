#include "main.h"
/**
 * print_alphabet_x10 - function
 * Description:This program prints alphabet
 * in lowercase
 * Return:nothing
 */
void print_alphabet_x10(void)
{
	/*declaring variable*/
	char c;
	int i;
	/*initialization*/
	c = 'a';
	i = 0;
	while (i < 10)
	{
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		i++;
		c = 0;
	}
	_putchar('\n');
}
