#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - function
 * Description:This function returns a pointer to a newly
 * allocated space in memory, which contains
 * a copy of the string given as a parameter.
 * @str:string to copy
 * Return:NULL(failure) or pointer(success)
 */
char *_strdup(char *str)
{
	char *strr;
	int i, str_len;

	if (str == NULL)
	{
		return (0);
	}
	/*Length of string*/
	for (str_len = 0; str[str_len] != '\0'; str_len++)
		;
	strr = malloc(sizeof(char) * (str_len + 1));
	if (strr == NULL)
	{
		return (0);
	}
	/*coping */
	for (i = 0; i < str_len; i++)
		strr[i] = str[i];
	return (strr);
}
