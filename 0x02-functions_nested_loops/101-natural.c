#include <stdio.h>

/**
 * main - prints natural numbers below 1024 and are
 * multiplies of 3 or 5
 *
 * Return: 0
 */
int main(void)
{
	int num1, num2;

	for (num1 = 1; num1 < 1024; num1++)
	{
		if ((num1 % 3) == 0 || (num1 % 5) == 0)
			num2 += num1;
	}
	printf("%d\n", num2);
	return (0);
}
