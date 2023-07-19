#include "main.h"

/**
 *_abs - prints absolute value of an integer
 *@a: integer
 *Return: returns absolute of integer
 *
 */
int _abs(int a)
{
	int abs_value;

	if (a < 0)
	{
		a = a * (-1);
	}
	abs_value = a;
	return (abs_value);
}
