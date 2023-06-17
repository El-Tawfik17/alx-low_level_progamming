#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - Entry point
 * Description:this program prints number of
 * arguments passed into it
 * @argc:parameter of prrogram
 * @argv:parameter of prrogram
 * Return: 0(sucess)
 */
int main(int argc, char *argv[])
{
	(void)argv;
	if (argc)
		printf("%d\n", argc - 1);
	return (0);
}
