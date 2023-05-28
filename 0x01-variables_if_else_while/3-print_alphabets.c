#include <stdio.h>
/**
 * main - Entry point
 * Description: This program prints alphabet
 * letter in lowcase
 * Return: Always 0 (Success)
 */
int main(void)
{
	/*declaring variable*/
	char c, C;
	/*initialisation */
	c = 'a';
	C = 'A';
	/*printing*/
	while ((c < 'z') || (C < 'Z'))
	{
		if (c < 'z')
		{
			putchar(c);
			c++;
		} else
		{
			putchar(C);
			C++;
		}
	}
	putchar('\n');
	return (0);
}


