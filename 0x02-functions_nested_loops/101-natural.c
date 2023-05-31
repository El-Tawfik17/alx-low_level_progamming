#include <stdio.h>
/**
 * main - Entry point
 * Desciption:this program print the sum 
 * of all the number below 1024
 * that are multiples of 3 or 5
 * Return:Always 0 (sucess)
 */
int main(void)
{
	/*declaring variables*/
	int i = 0, cmp = 0;
	while ( i < 1024)
	{
		if (((i % 3) == 0) || ((i % 5) == 0))
			cmp + = i;
	       i++;
	}
	printf("The sum of all the multiples of 3 or 5 below 1024 is %d", cmp);
	return (0);
}	

