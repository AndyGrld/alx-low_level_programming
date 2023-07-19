#include <stdio.h>
/**
 * main - print all 10 digits
 * @l - stores first number (0)
 *
 * Return: 0 always (success)
*/
int main(void)
{
	int l = 0;

	while (l < 10)
	{
		printf("%d", l);
		l++;
	}
	putchar('\n');
	return (0);
}
