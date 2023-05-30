#include "main.h"
/**
 * _isalpha - function
 * Description:This function checks alphabet
 * it return 1 if it is alphabet and 0 otherwhise
 * @c:is parameter for our function
 * Return:1 or 0
 */
int _isalpha(int c)
{
	/*declaring variable*/
	char cc;
	char CC;
	/*initialization*/
	cc = 'a';
	CC = 'A';
	while ((cc <= 'z') || (CC <= 'Z'))
	{
		if (c == cc || c == CC)
			return (1);
		cc++;
		CC++;
	}
	return (0);
}
