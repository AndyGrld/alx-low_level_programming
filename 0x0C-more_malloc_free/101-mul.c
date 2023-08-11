#include <stdio.h>
#include <stdlib.h>

/**
 * is_digit_string - Checks if a string consists only of digits.
 * @str: The input string to check.
 *
 * Return: 1 if the string consists only of digits, 0 otherwise.
 */

int is_digit_string(const char *str)
{
	while (*str)
	{
		if (*str < '0' || *str > '9')
		{
			return (0);
		}
		str++;
	}
	return (1);
}

/**
 * multiply - Multiplies two positive numbers and prints the result.
 * @num1: The first positive number as a string.
 * @num2: The second positive number as a string.
 *
 */
void multiply(const char *num1, const char *num2)
{
	if (!is_digit_string(num1) || !is_digit_string(num2))
	{
		printf("Error\n");
		exit(98);
	}

	int len1 = 0, len2 = 0;
	int i = 0, int j = 0;
	int start = 0;

	while (num1[len1])
		len1++;
	while (num2[len2])
		len2++;

	int result_len = len1 + len2;
	int *result = calloc(result_len, sizeof(int));

	for (i = len1 - 1; i >= 0; i--)
	{
		for (j = len2 - 1; j >= 0; j--)
		{
			int product = (num1[i] - '0') * (num2[j] - '0');
			int sum = result[i + j + 1] + product;

			result[i + j + 1] = sum % 10;
			result[i + j] += sum / 10;
		}
	}
	while (start < result_len && result[start] == 0)
		start++;
	if (start == result_len)
		printf("0\n");
	else
	{
		for (i = start; i < result_len; i++)
			printf("%d", result[i]);
		printf("\n");
	}
	free(result);
}

/**
 * main - Entry point of the program.
 * @argc: The number of command-line arguments.
 * @argv: An array of strings containing the arguments.
 *
 * Return: 0 on success, 98 on error.
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}

	multiply(argv[1], argv[2]);

	return (0);
}
