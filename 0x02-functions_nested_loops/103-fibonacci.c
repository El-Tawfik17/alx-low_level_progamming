#include <stdio.h>
/**
 * main - Entry point
 * Description:This program  prints
 * the first 50 Fibonacci numbers,
 * starting with 1 and 2, followed by a new line.
 * Return: Always 0 (sucess)
 */
int main(void)
{
	/*Declaring variables*/
	long i = 0, ii = 1, iii = 0, cmp = 0;

	while (iii < 4000000)
	{
		iii = ii + i;
		if ((iii % 2) == 0)
			cmp = cmp + iii;
		i = ii;
		ii = iii;
	}
	printf("%ld\n", cmp);
	return (0);
}


