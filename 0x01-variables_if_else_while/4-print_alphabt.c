#include <stdio.h>
/**
 * main - print all letters except q and e
 * @l - stores first letter
 *
 * Return: 0 always (success)
*/
int main(void)
{
	char l = 'a';

	while (l <= 'z')
	{
		if (l != 'e' && l != 'q')
		{
			putchar(l);
		}
		l++;
	}
	putchar('\n');
	return (0);
}
