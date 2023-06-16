#include "main.h"
/**
 * _strcmp - function
 * Description:This function compares two strings
 * @s1:parameter of function
 * @s2:parameter of function
 * Return: 1 , 0 or less than 0
 */
int _strcmp(char *s1, char *s2)
{
	/*declaring variable*/
	int a = 0;

	while (s1[a] != '\0')
	{
		if (s1[a] < s2[a])
			return (s1[a] - s2[a]);
		if (s1[a] > s2[a])
			return (s1[a] - s2[a]);
		a++;
	}
	return (0);
}

