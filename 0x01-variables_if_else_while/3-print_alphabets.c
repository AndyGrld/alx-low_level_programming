#include <stdio.h>
/**
 * main - prints alphabet in lower and uppercase
 * @l - stores first letter (A);
 *
 * Return: 0 always
 */
int main(void)
{
	char l = 97;

	while (l <= (95 + 27))
	{
		putchar(l);
		l++;
	}
	l = 65;
	while (l <= (65 + 25))
	{
		putchar(l);
		l++;
	}
	putchar('\n');
	return (0);
}
