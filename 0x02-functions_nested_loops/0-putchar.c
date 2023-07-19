#include "main.h"

/**
 * main - _putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int str[] = {95, 112, 117, 116, 99, 104, 97, 114};
	int length, size;

	size = sizeof(str) / sizeof(int);
	for (length = 0; length < size; length++)
	{
		_putchar(str[length]);
	}
	_putchar('\n');
	return (0);
}
