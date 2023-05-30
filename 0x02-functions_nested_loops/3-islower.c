#include "main.h"
/**
 * _islower - function
 * Description:This function checks alphabet
 * it return 1 if it is lowercase and 0 otherwhise
 * Return:1 or 0
 */
int _islower(int c)
{
	/*declaring variable*/
	char cc;
	/*initialization*/
	cc = 'a';
	while (cc <= 'z')
	{
		if (c == cc)
			return (1);
		cc++;
	}
	return (0);
}
