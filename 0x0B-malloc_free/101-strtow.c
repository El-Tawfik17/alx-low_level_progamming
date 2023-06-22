#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * strtow -function
 * Description:this function splits a string into words
 * @str:parameter of function
 * Return:pointer to pointer(success)
 */
char **strtow(char *str)
{
	int i, str_len = 0, nb_word = 0, j = 0, m = 0, k = 0;
	char **tab;

	if (str == NULL || str == "")
		return (0);
	/*checking the length of string*/
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ')
			nb_word += 1;
	}
	tab = malloc(sizeof(char *) * (nb_word + 2));
	if (tab == NULL)
		return (0);
	for (i = 0; str[i] != '\0'; i++)
	{
		str_len += 1;
		if (str[i] == ' ')
		{
			j += 1;
			tab[j] = malloc(sizeof(char) * (str_len + 1));
			if (tab[j] == NULL)
			{
				for (i = 0; i < j; i++)
					free(tab[i]);
				free(tab);
				return (0);
			}
			str_len = 0;
		}
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ')
		{
			m = 0;
			k += 1;
		}
		tab[k][m] = str[i];
		m++;
	}
	tab[k + 1] = NULL;
	return (tab);
}
