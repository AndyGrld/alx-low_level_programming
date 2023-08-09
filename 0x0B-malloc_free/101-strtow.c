#include "main.h"
#include <stdlib.h>

/**
 * count_words - counts the number of words in a string
 * @s1: string to count
 *
 * Return: int of number of words
 */
int count_words(char *s1)
{
	int i, count = 0;

	for (i = 0; s1[i]; i++)
	{
		if (s1[i] == ' ')
		{
			if (s1[i + 1] != ' ' && s1[i + 1] != '\0')
				count++;
		}
		else if (i == 0)
			count++;
	}
	count++;
	return (count);
}

/**
 * strtow - splits a string into words
 * @str: string to split
 *
 * Return: pointer to an array of strings
 */
char **strtow(char *str)
{
	int idx1, idx2, idx3, idx4, num_words = 0, word_count = 0;
	char **word_array;

	if (str == NULL || *str == '\0')
		return (NULL);
	num_words = count_words(str);
	if (num_words == 1)
		return (NULL);
	word_array = (char **)malloc(num_words * sizeof(char *));
	if (word_array == NULL)
		return (NULL);
	word_array[num_words - 1] = NULL;
	idx1 = 0;
	while (str[idx1])
	{
		if (str[idx1] != ' ' && (idx1 == 0 || str[idx1 - 1] == ' '))
		{
			for (idx2 = 1; str[idx1 + idx2] != ' ' && str[idx1 + idx2]; idx2++)
				;
			idx2++;
			word_array[word_count] = (char *)malloc(idx2 * sizeof(char));
			idx2--;
			if (word_array[word_count] == NULL)
			{
				for (idx3 = 0; idx3 < word_count; idx3++)
					free(word_array[idx3]);
				free(word_array[num_words - 1]);
				free(word_array);
				return (NULL);
			}
			for (idx4 = 0; idx4 < idx2; idx4++)
				word_array[word_count][idx4] = str[idx1 + idx4];
			word_array[word_count][idx4] = '\0';
			word_count++;
			idx1 += idx2;
		}
		else
			idx1++;
	}
	return (word_array);
}
