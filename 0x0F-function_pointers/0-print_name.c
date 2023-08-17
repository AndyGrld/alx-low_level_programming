#include <stdio.h>
#include <stdlib.h>
/**
 * print_name - prints name
 * @name: name
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
