#include "main.h"
/**
 * nat_print_table - function
 * description:this function print custome format for tables
 * @cmp:parameter for function
 */
void nat_print_table(int cmp)
{
	if (cmp <= 9)
	{
		_putchar(cmp + '0');
	} else if (cmp > 9 && cmp <= 99)
	{
		_putchar(((cmp - (cmp % 10)) / 10) + '0');
		_putchar((cmp % 10) + '0');
	} else if (cmp > 99)
	{
		_putchar(((cmp - (cmp % 100)) / 100) + '0');
		_putchar((((cmp % 100) - (cmp % 10)) / 10) + '0');
		_putchar((cmp % 10) + '0');
	}
				}
}
