#include <stdio.h>

/**
 *  main - prints first 98 fibonacci numbers
 *
 *  Return: 0
 */
int main(void)
{
	int c, test, test2;
	long int num1, num2, fn, fn2, n11, n22;

	num1 = 1;
	num2 = 2;
	test = test2 = 1;
	printf("%ld, %ld", num1, num2);
	for (c = 0; c < 96; c++)
	{
		if (test)
		{
			fn = num1 + num2;
			printf(", %ld", fn);
			num1 = num2;
			num2 = fn;
		}
		else
		{
			if (test2)
			{
				n11 = num1 % 1000000000;
				n22 = num2 % 1000000000;
				num1 = num1 / 1000000000;
				num2 = num2 / 1000000000;
				test2 = 0;
			}
			fn2 = (n11 + n22);
			fn = num1 + num2 + (fn2 / 1000000000);
			printf(", %ld", fn);
			printf("%ld", fn2 % 1000000000);
			num1 = num2;
			n11 = n22;
			num2 = fn;
			n22 = (fn2 % 1000000000);
		}
		if (((num1 + num2) < 0) && test == 1)
			test = 0;
	}
	printf("\n");
	return (0);
}
