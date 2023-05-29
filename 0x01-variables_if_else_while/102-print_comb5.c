#include <stdio.h>
/**
 * main - Entry point
 * Description: This program prints all
 * single digital numbers of base 10
 * Return: Always 0 (Success)
 */
int main(void)
{
	/*declaring variables*/
	int i;
	int ii, iii, iiii;
	/*initialisation */
	iiii = 1;
	i = 0;
	ii = 0;
	iii = 0;
	/*printing*/
	while (i < 10)
	{
		i = 0;
		while (ii < 10)
		{
			iii = 0;
			while (iii < 10)
			{
				iiii = 0;
				while (iiii < 10)
				{
					putchar(i + '0');
					putchar(ii + '0');
					putchar(' ');
					putchar(iii + '0');
					putchar(iiii + '0');
					if (i <= 9 && ii <= 7 && iii <= 9 && iiii <= 9)
					{
						putchar(',');
						putchar(' ');
					}
					iiii++;
				}
				iii++;
			}
			ii++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}


