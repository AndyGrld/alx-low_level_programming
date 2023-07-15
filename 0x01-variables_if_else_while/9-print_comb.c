#include <stdio.h>
/**
 * main - prints numbers in ascending order
 * @i - first initializer
 *
 * Return: 0 always(sucess)
*/
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
		if (i == 9)
			continue;
		else
			putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
