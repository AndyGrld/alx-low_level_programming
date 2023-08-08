#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - return pointer to newly allocated memory
 * @str: string
 *
 * Return: pointer to newly allocated memory
 */

char *_strfup(char *str)
{
	int size = 0;
	char *copy_string;
	int i = 0;

	while(str[size])
	{
		size++;
	}

	copy_string = malloc(sizeof(char) * (size + 1));

	if (copy_string == NULL)
	{
		return (NULL);
	}
	
	while(i < size)
	{
		copy_string[i] = str[i];
		i++;
	}
	copy_string[i++] = '\0';

	return (copy_string);
}

int main(void)
{
	char *pointer = _strfup("hello");
	printf("%s", pointer);
	free(pointer);
	return (0);
}
