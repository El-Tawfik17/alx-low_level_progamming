#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - Entry point
 * Description:this program prints
 * multiple of arguments passed into it
 * @argc:parameter of prrogram
 * @argv:parameter of prrogram
 * Return: 0(sucess)
 */
int main(int argc, char *argv[])
{
	int i, mul = 1;

	if (argc >= 2)
	{
		for (i = 1; i < argc; i++)
			mul *= atoi(argv[i]);
		printf("%d\n", mul);
	} else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
