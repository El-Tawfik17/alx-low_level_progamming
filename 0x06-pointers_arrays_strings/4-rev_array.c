#include "main.h"
/**
 * reverse_array - function
 * Desciption:This function reverses
 * the content of an array of integers.
 * @a:parameter of function
 * @n:parameter of function
 * Return:nothing
 */
void reverse_array(int *a, int n)
{
	/*declaring Variable*/
	int i, j = 0, inter;

	for (i = (n - 1); (i - j) > 0; i--)
	{
		inter = a[i];
		a[i] = a[j];
		a[j] = inter;
		j++;
	}
}
