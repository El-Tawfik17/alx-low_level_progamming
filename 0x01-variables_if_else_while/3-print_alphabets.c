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
	char c;
	/*initialisation */
	c = 'a';
	/*printing*/
	while (c < ('a' + 24))
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}


