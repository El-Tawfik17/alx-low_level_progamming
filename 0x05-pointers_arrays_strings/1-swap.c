#include "main.h"
/**
 * swap_int -function  swap to interger
 * @a:is paramater
 * @b:is paramater
 * Return:0
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
