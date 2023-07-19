#include <stdio.h>
/**
 * main - prints all numbers in base 10 using putchar
 * @l - stores first number
 *
 * Return: 0 always (success)
*/
int main(void)
{
	int l = 0;

	while (l < 10)
	{
		putchar((l % 10) + '0');
		l++;
	}
	putchar('\n');
	return (0);
}
