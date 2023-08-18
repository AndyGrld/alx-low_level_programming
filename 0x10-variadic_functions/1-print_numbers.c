#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line.
 * @separator: separator to print between numbers
 * @n: number of numbers to print
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int index;
	int num;
	va_list valist;

	va_start(valist, n);
	for (index = 0; index < n; index++)
	{
		num = va_arg(valist, int);
		printf("%d", num);
		if (index < n - 1 && separator)
			printf("%s", separator);
	}
	printf("\n");
	va_end(valist);
}
