#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * strtow - split a string into words
 * @str: string to split
 *
 * Return: pointer to an array of strings (words), or NULL on failure
 */
char **strtow(char *str)
{
	int word_count = 0;
	int word_index = 0;
	char **words;

	if (str == NULL || *str == '\0')
		return (NULL);

	for (int i = 0; str[i] != '\0'; i++)
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
			word_count++;

	words = (char **)malloc(sizeof(char *) * (word_count + 1));
	if (words == NULL)
		return (NULL);

	for (int i = 0; str[i] != '\0';)
	{
		if (str[i] != ' ')
		{
			int word_start = i;

			while (str[i] != ' ' && str[i] != '\0')
				i++;
			words[word_index] = (char *)malloc(i - word_start + 1);
			strncpy(words[word_index], &str[word_start], i - word_start);
			words[word_index++][i - word_start] = '\0';
		}
		else
			i++;
	}
	words[word_index] = NULL;

	return (words);
}
