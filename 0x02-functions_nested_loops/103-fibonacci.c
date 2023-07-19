#include <stdio.h>

/**
 * main - prints sum of even valued pairs of fibonnaci
 *
 * Return: 0
 */
int main(void)
{
	long int num1, num2, fib1, fib2;

	num1 = 1;
	num2 = 2;
	fib1 = fib2 = 0;
	while (fib1 <= 4000000)
	{
		fib1 = num1 + num2;
		num1 = num2;
		num2 = fib1;
		if ((num1 % 2) == 0)
		{
			fib2 += num1;
		}
	}
	printf("%ld\n", fib2);
	return (0);
}
