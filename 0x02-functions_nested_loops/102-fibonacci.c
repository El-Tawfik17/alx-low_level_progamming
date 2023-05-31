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
	int i = 0, ii = 1, iii = 0, j = 0;

	while (j < 50)
	{
		iii = ii + i;
		if (j <= 48)
			printf("%d, ", iii);
		else
			printf("%d", iii);
		i = ii;
		ii = iii;
		j++;
	}
	printf("\n");
	return (0);
}


