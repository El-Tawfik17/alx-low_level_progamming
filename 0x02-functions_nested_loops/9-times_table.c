#include "main.h"
/**
 * times_table - function
 * Description:This function prints the 9 times
 * tables,starting with 0
 */
void times_table(void)
{
	/*Declaring Variables*/
	int i, j, cmp, lstd, fstd;
	/*initialization*/
	i = j = 0;
	while (i < 10)
	{
		while (j < 10)
		{
			cmp = i * j;
			if (cmp <= 9)
			{
				_putchar(cmp + '0');
			} else
			{
				lstd = cmp % 10;
				fstd = (cmp - lstd) / 10;
				_putchar(fstd + '0');
				_putchar(lstd + '0');
			}
			if (j <= 8)
			{
				_putchar(',');
				_putchar(' ');
			}
			j++;
		}
		_putchar('\n');
		i++;
		j = 0;
	}
}
