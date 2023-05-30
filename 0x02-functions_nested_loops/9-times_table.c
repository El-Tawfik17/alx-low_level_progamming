#include "main.h"
/**
 * times_table - function
 * Description:This function prints the 9 times
 * tables,starting with 0
 */
void times_table(void)
{
	/*Declaring Variables*/
	int i, j, cmp;
	/*initialization*/
	i = j = 0;
	while (i < 10)
	{
		while (j < 10)
		{
			cmp = i * j;
			_putchar(cmp + '0');
			if (j <= 8)
				_putchar('.');
			j++;
		}
		_putchar('\n');
		i++;
		j = 0;
	}
}
