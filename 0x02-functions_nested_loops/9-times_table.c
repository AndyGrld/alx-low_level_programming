#include "main.h"

/**
 * times_table - prints the 9 times table
 *
 * Return: None
 */
void times_table(void)
{
	int num1, num2, product;

	for (num1 = 0; num1 <= 9; num1++)
	{

		_putchar(48);
		for (num2 = 1; num2 <= 9; num2++)
		{
			product = num1 * num2;
			_putchar(44);
			_putchar(32);
			if (product <= 9)
			{
				_putchar(32);
				_putchar(product + 48);
			}
			else
			{
				_putchar((product / 10) + 48);
				_putchar((product % 10) + 48);
			}
		}
		_putchar('\n');
	}
}
