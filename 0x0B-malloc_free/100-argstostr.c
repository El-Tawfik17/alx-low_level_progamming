#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strlen - function
 * Description:This function cumpte the length of
 * a giving string
 * @c:paramater of function
 * Return:integer
 */
int _strlen(char *c)
{
	int c_len;

	for (c_len = 0; c[c_len] != '\0'; c_len++)
		;
	return (c_len);
}
/**
 * _co_str - function
 * Description:This function copie ss2 in ss1
 * @ss1:parameter
 * @ss2:parameter
 * Return:Nothing
 */
void _co_str(char *ss1, char *ss2)
{
	int i, ss1_len = 0;

	ss1_len = _strlen(ss1);
	if (ss2 != NULL)
	{
		for (i = 0; ss2[i] != '\0'; i++)
			ss1[ss1_len + i] = ss2[i];
		ss1[ss1_len + i] = '\n';
		ss1[ss1_len + i + 1] = '\0';
	}
}
/**
 * argstostr - function
 * Description:This function concatenates all the arguments of your program.
 * @ac:parameter of function
 * @av:parameter of function
 * Return:pointer(success) or NULL(failure)
 */
char *argstostr(int ac, char **av)
{
	int i, len = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (0);
	/*checking all the argument length*/
	for (i = 0; i < ac; i++)
		len += _strlen(av[i]);
	/*alocation in memory*/
	str = malloc(sizeof(char) * (len + ac));
	if (str == NULL)
		return (0);
	/*initialization for the first execution of _strlen in _co_str*/
	*str = '\0';
	/*coping into str*/
	for (i = 0; i < ac; i++)
		_co_str(str, av[i]);
	return (str);
}
