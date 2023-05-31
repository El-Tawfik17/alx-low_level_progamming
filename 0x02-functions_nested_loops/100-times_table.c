#include "main.h"
/**
 * print_times_table - function
 * Description:This function prints the 9 times
 * tables,starting with 0
 * @n :parameter of function
 */
void print_times_table(int n)
{
	int i = 0, j = 0, cmp;

	if (n <= 15 && n >= 0)
	{
		while (i < n + 1)
		{
			while (j < n +1)
			{
				cmp = i * j;
				if (j > 0 && cmp <= 9)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
				} else if (j > 0 && cmp > 9 && cmp <= 99)
				{
					_putchar(' ');
					_putchar(' ');
				} else if (j > 0 && cmp > 99)
				{
				      _putchar(' ');
				}	      
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
				if (j <= (n - 1))
					_putchar(',');
				j++;
			}
			_putchar('\n');
			i++;
			j = 0;
		}
	}
}
