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
	/*initialisation */
	i = 0;
	ii = 0;
	/*printing*/
	while (i < 9)
	{
		ii = i + 1;
		while (ii < 10)
		{
			putchar(i + '0');
			putchar(ii + '0');
			if (i <= 7 && ii <= 9)
			{
				putchar(',');
				putchar(' ');
			}
			ii++;
		}
		++i;
	}
	putchar('\n');
	return (0);
}


