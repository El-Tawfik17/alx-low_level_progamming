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
	/*initialisation */
	i = 0;
	/*printing*/
	while (i < 10)
	{
		putchar(i + '0');
		i++;
	}
	putchar('\n');
	return (0);
}


