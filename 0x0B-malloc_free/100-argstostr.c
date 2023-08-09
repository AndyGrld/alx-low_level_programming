#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program.
 * @ac: number of arguments
 * @av: double pointer to arguments
 *
 * Return: pointer to new string, or NULL if error
 */
char *argstostr(int ac, char **av)
{
	int i, j, length = 0, index = 0;
	char *result;

	if (ac <= 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			length++;
		length++;
	}
	length++;

	result = malloc(length * sizeof(char));
	if (result == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			result[index] = av[i][j];
			index++;
		}
		result[index] = '\n';
		index++;
	}
	result[index] = '\0';

	return (result);
}
