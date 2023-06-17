#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - Entry point
 * Description:this program prints
 * arguments passed into it
 * @argc:parameter of prrogram
 * @argv:parameter of prrogram
 * Return: 0(sucess)
 */
int main(int argc, char *argv[])
{
	int i;
	if (argc >= 1)
	{
		for (i = 0; i < argc; i++)
			printf("%s\n", argv[i]);
	}
	return (0);
}
