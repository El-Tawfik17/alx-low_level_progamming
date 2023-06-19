#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"
/**
 * coins - function
 * Description:this function search the
 * minimum number of coins
 * @c:parameter of function
 * Return:integer
 */
int coins(int c)
{
	if (c == 0)
		return (0);
	else if (c >= 25)
		return ((c / 25) + coins(c % 25));
	else if (c >= 10)
		return ((c / 10) + coins(c % 10));
	else if (c >= 5)
		return ((c / 5) + coins(c % 5));
	else if (c >= 2)
		return ((c / 2) + coins(c % 2));
	return (1);
}
/**
 * main - Entry point
 * Description:this program prints
 * number of coins of arguments passed into it
 * @argc:parameter of prrogram
 * @argv:parameter of prrogram
 * Return: 0(sucess)
 */
int main(int argc, char *argv[])
{

	if (argc == 2 && *argv[1] > 0)
	{
		printf("%d\n", coins(atoi(argv[1])));
	} else if (argc != 2)
	{
		printf("Error\n");
		return (1);
	} else if (*argv[1] < 0)
	{
		printf("0\n");
	}
	return (0);
}
