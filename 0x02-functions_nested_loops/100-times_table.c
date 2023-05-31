#include "main.h"
/**
 * print_times_table - function
 * Description:This function prints the 9 times
 * tables,starting with 0
 * @n:parameter of function
 */
void print_times_table(int n)
{
	/*Declaring Variables*/
	int i, j, cmp, lstd, fstd, scdd;
	/*initialization*/
	i = j = 0;
	if (n <= 15 && n > 0)
	{
		while (i < n)
		{
			while (j < n)
			{
				cmp = i * j;
				if (j > 0 && cmp <= 9)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
				} else if ((j > 0) && (cmp > 9))
				{
					_putchar(' ');
					_putchar(' ');
				} else if ((j > 0) && (cmp > 9) && (cmp > 99))
				{
					_putchar(' ');
				}
				 nat_print(i, j, cmp, n);
				j++;
			}
			_putchar('\n');
			i++;
			j = 0;
		}
	}
}
