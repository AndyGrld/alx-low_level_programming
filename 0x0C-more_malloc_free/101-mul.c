#include <stdio.h>
#include <stdlib.h>

/**
 * _print - moves a string one place to the left and prints the string
 * @str: string to move
 * @l: size of string
 *
 * Return: void
 */

int is_digit_string(const char *str)
{
	while (*str)
	{
		if (*str < '0' || *str > '9')
		{
			return 0;
		}
		str++;
	}
	return 1;
}

void multiply(const char *num1, const char *num2)
{
	if (!is_digit_string(num1) || !is_digit_string(num2))
	{
		printf("Error\n");
		exit(98);
	}

	int len1 = 0, len2 = 0;
	while (num1[len1])
		len1++;
	while (num2[len2])
		len2++;

	int result_len = len1 + len2;
	int *result = calloc(result_len, sizeof(int));

	for (int i = len1 - 1; i >= 0; i--)
	{
		for (int j = len2 - 1; j >= 0; j--)
		{
			int product = (num1[i] - '0') * (num2[j] - '0');
			int sum = result[i + j + 1] + product;
			result[i + j + 1] = sum % 10;
			result[i + j] += sum / 10;
		}
	}

	int start = 0;
	while (start < result_len && result[start] == 0)
	{
		start++;
	}

	if (start == result_len)
	{
		printf("0\n");
	}
	else
	{
		for (int i = start; i < result_len; i++)
		{
			printf("%d", result[i]);
		}
		printf("\n");
	}

	free(result);
}

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return 98;
	}

	multiply(argv[1], argv[2]);

	return 0;
}
