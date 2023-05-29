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
	int ii;
	int iii;
	/*initialisation */
	i = 0;
	ii = 0;
	iii = 0;
	/*printing*/
	while (i < 8)
	{
		ii = i + 1;
		while (ii < 9)
		{
			iii = ii + 1;
			while (iii < 10)
			{
				putchar(i + '0');
				putchar(ii + '0');
				putchar(iii + '0');
				if (i <= 6 && ii <= 8 && iii <= 9)
				{
					putchar(',');
					putchar(' ');
				}
				iii++;
			}
			ii++;
		}
		++i;
	}
	putchar('\n');
	return (0);
}


