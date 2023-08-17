#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main - perform operations
 * @argc: number of passed arguments
 * @argv: array of pointers
 *
 * Return: 0
 */
int main(int argc , char *argv[])
{
	int x, y, z;
	int (*f)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	x = atoi(argv[1]);
	y = atoi(argv[3]);
	f = get_op_func(argv[2]);
	if (f == NULL)
	{
		printf("Error\n");
		exit(98);
	}
	z = f(x, y);
	printf("%d\n", c);
	return (0);
}
