#include <stdio.h>
/**
 * main - prints lowercase letters
 * @l - stores first letter
 *
 * Return:0 always
*/
int main(void)
{
	char l = 'a';

	while (l <= 'z')
	{
		putchar(l);
		l++;
	}
	putchar('\n');
	return (0);
}
