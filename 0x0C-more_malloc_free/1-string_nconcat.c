#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenates two string
 * @s1: string one
 * @s2: string two
 * @n: unsigned integer
 *
 * Return: concatenates two strings
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, i;
	char *concat_string;

	len1 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
	{
		n = 0;
	}
	while (s1[len1])
	{
		len1++;
	}
	concat_string = malloc(len1 + n + 1);
	if (concat_string == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
	{
		*(concat_string + i) = *(s1 + i);
	}
	if (s2 == NULL)
	{
		*(concat_string + len1 + 1) = '\0';
		return (concat_string);
	}
	for (i = 0; i < n; i++)
	{
		*(concat_string + len1) = *(s2 + i);
		len1++;
	}
	*(concat_string + len1) = '\0';

	return (concat_string);
}
