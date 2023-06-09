#include "main.h"
/**
 * print_most_numbers - function
 * Description:this function
 * print numbers from 0 to 9
 * follow by new line.
 */
void print_most_numbers(void)
{
	/*declaring variable*/
	char c;
	/*initialization*/
	c = 0;
	while (c < 10)
	{
		if (c != 4 && c != 2)
			_putchar(c + '0');
		c++;
	}
	_putchar('\n');
}

