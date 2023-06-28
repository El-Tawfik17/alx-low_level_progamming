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
 * _co_str_s1 - function
 * Description:This function copie ss2 in ss1
 * @ss:parameter
 * @sss:parameter
 * Return:Nothing
 */
void _co_str_s1(char *ss, char *sss)
{
	int i, ss1_len = 0;

	ss1_len = _strlen(ss);
	if (sss != NULL)
	{
		for (i = 0; sss[i] != '\0'; i++)
			ss[ss1_len + i] = sss[i];
		ss[ss1_len + i] = '\0';
	}
}
/**
 * _co_str_s2 - function
 * Description:This function copie ss2 in ss1
 * @ss1:parameter
 * @ss2:parameter
 * @m:parameter of function
 * Return:Nothing
 */
void _co_str_s2(char *ss1, char *ss2, unsigned int m)
{
	unsigned int i, ss1_len = 0, ss2_len = 0;

	ss1_len = _strlen(ss1);
	if (ss2 != NULL)
	{
		ss2_len = _strlen(ss2);
		if (ss2_len <= m)
		{
			for (i = 0; ss2[i] != '\0'; i++)
				ss1[ss1_len + i] = ss2[i];
		} else if (m < ss2_len && m != 0)
		{
			for (i = 0; i < m; i++)
				ss1[ss1_len + i] = ss2[i];
		}
		ss1[ss1_len + i] = '\0';
	}
}
/**
 * string_nconcat - function
 * Description:function that concatenates two strings
 * @s1:parameter of function
 * @s2:parameter of function
 * @n:parameter of function
 * Return:pointer(success) or NULL(failure)
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	/*declaring variable*/
	unsigned int s1_len, s2_len;
	char *str;
	/*return value on failure*/
	if (s1 != NULL && s2 != NULL)
	{
		/*checking s1 length*/
		s1_len = _strlen(s1);
		/*checking  s2 length*/
		s2_len = _strlen(s2);
	}
	if (s1 == NULL)
		s1_len = 0;
	if (s2 == NULL || n == 0)
		s2_len = 0;
	if (n >= s2_len && n != 0)
		str = malloc(sizeof(char) * (s1_len + s2_len + 1));
	else if (n < s2_len || n == 0)
		str = malloc(sizeof(char) * (s1_len + n + 1));
	if (str == NULL)
		return (0);
	/*initialization*/
	*str = '\0';
	/*copy of s1*/
	_co_str_s1(str, s1);
	/*copy of s2*/
	_co_str_s2(str, s2, n);
	return (str);
}
