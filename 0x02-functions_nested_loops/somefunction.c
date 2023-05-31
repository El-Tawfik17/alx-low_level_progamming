#include "main.h"
/**
 * nat_print - function
 * Description : this function print custome format
 * @i:parameter of function
 * @j:parameter of function
 * @cmp:parameter of function
 * @n:parameter of function
 */
void nat_print(int i, int j, int cmp, int n)
{
	int lstd, fstd, scdd;

	if (cmp <= 9)
	{
		_putchar(cmp + '0');
		if (j <= (n - 2))
		_putchar(',');
	} else if (cmp > 9)
	{
		lstd = cmp % 10;
		fstd = (cmp - lstd) / 10;
		_putchar(fstd + '0');
		_putchar(lstd + '0');
		if (j <= (n - 2))
		_putchar(',');
	} else if (cmp > 99)
	{
		lstd = cmp % 10;
		scdd = (((cmp - lstd) / 10) % 10);
		fstd = ((cmp - (cmp % 100)) / 100);
		_putchar(fstd + '0');
		_putchar(scdd + '0');
		_putchar(lstd + '0');
		if (j <= (n - 2))
			_putchar(',');
	}
}
