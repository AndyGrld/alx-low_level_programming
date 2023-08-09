#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - concatenate all arguments of the program
 * @ac: number of arguments
 * @av: array of arguments
 *
 * Return: pointer to the concatenated string, or NULL if ac == 0 or av == NULL
 */
char *argstostr(int ac, char **av)
{
	int total_length = 0;
	int position = 0;
	int i;
	int j;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		total_length += strlen(av[i]) + 1;
	}

	char *result = (char *)malloc(sizeof(char) * total_length);

	if (result == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			result[position++] = av[i][j];
		}
		result[position++] = '\n';
	}

	return (result);
}
