#include <stdio.h>
/**
 * main - print numbers in base 16
 * @l - stores first number 0
 * @c - stores first leter a
 * Try using ascii
 * Return: 0 always success
*/
int main(void)
{
	int l = 0;
	char c = 'a';

	while (l < 10)
	{
		putchar((l % 10) + '0');
		l++;
	}
	while (c <= 'f')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
