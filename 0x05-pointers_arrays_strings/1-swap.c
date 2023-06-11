#include "main.h"
/**
 * swap_int - function
 * Description:this function swaps the value
 * of two integer
 * @a:parameter of function
 * @b:parameter of function
 * Return: Nothing
 */
void swap_int(int *a, int *b)
{
	/*declaring variables*/
	int inter;
	/*swaps making*/
	inter = *a;
	*a = *b;
	*b = inter;
}
