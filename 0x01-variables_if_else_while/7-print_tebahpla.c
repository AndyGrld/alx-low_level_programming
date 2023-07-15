#include <stdio.h>
/**
 * main - prints alphabet in reverse
 * @l - stores letter z
 *
 * Return: 0 always (success)
*/
int main(void)
{
	char l = 'z';

	while (l >= 'a')
	{
		putchar(l);
		l--;
	}
	putchar('\n');
	return (0);
}
