#include <stdio.h>
/**
 * main - prints alphabet in lower and uppercase
 * @l - stores first letter (A);
 *
 * Return: 0 always
*/
int main(void)
{
	char l = 'a';

	while (l <= 'z')
	{
		putchar(l);
		l++;
	}
	l = 'A';
	while (l <= 'Z')
	{
		putchar(l);
		l++;
	}
	putchar('\n');
	return (0);
}
