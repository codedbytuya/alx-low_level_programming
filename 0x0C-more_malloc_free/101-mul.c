#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _isdigit - Checks if a character is a digit.
 * @c: The character to check.
 *
 * Return: 1 if the character is a digit, 0 otherwise.
 */
int _isdigit(char c)
{
	return c >= '0' && c <= '9';
}

/**
 * _strlen - Computes the length of a string.
 * @str: The string.
 *
 * Return: The length of the string.
 */
int _strlen(char *str)
{
	int len = 0;

	while (str[len])
		len++;

	return len;
}

/**
 * _print_error_exit - Prints an error message and exits with status 98.
 */
void _print_error_exit(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * _multiply - Multiplies two positive numbers.
 * @num1: The first positive number as a string.
 * @num2: The second positive number as a string.
 */
void _multiply(char *num1, char *num2)
{
	int len1 = _strlen(num1);
	int len2 = _strlen(num2);
	int len_res = len1 + len2;
	int *result = malloc(sizeof(int) * len_res);
	int i, j, carry, n1, n2, sum;

	if (result == NULL)
		_print_error_exit();

	for (i = 0; i < len_res; i++)
		result[i] = 0;

	for (i = len1 - 1; i >= 0; i--)
	{
		carry = 0;
		n1 = num1[i] - '0';

		for (j = len2 - 1; j >= 0; j--)
		{
			n2 = num2[j] - '0';
			sum = (n1 * n2) + result[i + j + 1] + carry;
			carry = sum / 10;
			result[i + j + 1] = sum % 10;
		}

		if (carry > 0)
			result[i + j + 1] += carry;
	}

	i = 0;
	while (i < len_res - 1 && result[i] == 0)
		i++;

	while (i < len_res)
	{
		printf("%d", result[i]);
		i++;
	}
	printf("\n");

	free(result);
}

/**
 * main - Entry point. Multiplies two positive numbers.
 * @argc: The number of command-line arguments.
 * @argv: An array of strings containing the command-line arguments.
 *
 * Return: 0 on success.
 */
int main(int argc, char *argv[])
{
	int i, j;

	if (argc != 3)
		_print_error_exit();

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (!_isdigit(argv[i][j]))
				_print_error_exit();
		}
	}

	_multiply(argv[1], argv[2]);

	return 0;
}

