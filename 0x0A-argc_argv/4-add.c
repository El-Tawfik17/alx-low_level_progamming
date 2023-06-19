#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"
/**
 * main - Entry point
 * Description:this program prints
 * sum of arguments passed into it
 * @argc:parameter of prrogram
 * @argv:parameter of prrogram
 * Return: 0(sucess)
 */
int main(int argc, char *argv[])
{
	int i, sum = 0, j = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			while (argv[i][j] != '\0')
			{
				if (!isdigit(argv[i][j]))
				{
					printf("Error\n");
					return (1);
				}
				j++;
			}
				j = 0;
				sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	} else
	{
		printf("0\n");
	}
	return (0);
}
