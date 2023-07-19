#include "main.h"
/**
 * _islower - checks if c is lowercase
 * @c: character
 * Return: 1 if c is lowercase, else 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
