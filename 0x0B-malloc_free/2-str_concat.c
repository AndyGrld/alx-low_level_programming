#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: string one
 * @s2: string two
 *
 * Return: concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	int size_1 = 0;
	int size_2 = 0;
	char *concat_string;
	int pointer_1 = 0;
	int pointer_2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[size_1])
		size_1++;

	while (s2[size_2])
		size_2++;
	concat_string = malloc(sizeof(char) * (size_1 + size_2 + 1));

	if (concat_string == NULL)
		return (NULL);
	while (pointer_1 < size_1)
	{
		concat_string[pointer_1] = s1[pointer_1];
		pointer_1++;
	}
	while (pointer_2 < size_2)
	{
		concat_string[pointer_1] = s2[pointer_2];
		pointer_2++;
		pointer_1++;
	}
	concat_string[pointer_1] = '\0';

	return (concat_string);
}
