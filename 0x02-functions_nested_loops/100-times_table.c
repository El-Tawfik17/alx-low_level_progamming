#include "main.h"
/**
 * print_times_table - function
 * @n :parameter of function
 */
void print_times_table(int n)
{
	int i = 0, j = 0, cmp;

	if (n <= 15 && n >= 0)
	{
		while (i < n + 1)
		{
			while (j < n + 1)
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
				nat_print_table(cmp);
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
