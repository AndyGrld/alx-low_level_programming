#include "main.h"

/**
 * print_times_table - prints the n times table
 *
 * @n: number times table (0 < n <= 15)
 *
 * Return: None
 */
void print_times_table(int n)
{
	int num1, num2, op;

	if (n >= 0 && n <= 15)
	{
		for (num1 = 0; num1 <= n; num1++)
		{
			_putchar(48);
			for (num2 = 1; num2 <= n; num2++)
			{
				op = num1 * num2;
				_putchar(44);
				_putchar(32);
				if (op <= 9)
				{
					_putchar(32);
					_putchar(32);
					_putchar(op + 48);
				}
				else if (op <= 99)
				{
					_putchar(32);
					_putchar((op / 10) + 48);
					_putchar((op % 10) + 48);
				}
				else
				{
					_putchar(((op / 100) % 10) + 48);
					_putchar(((op / 10) % 10) + 48);
					_putchar((op % 10) + 48);
				}
			}
			_putchar('\n');
		}
	}
}
