#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _isdigit - checks if a character is a digit
 * @c: character to check
 *
 * Return: 1 if c is a digit, 0 otherwise
 */

int _isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

/**
 * mul - multiplies two numbers and prints the result
 * @num1: first number to multiply
 * @num2: second number to multiply
 *
 * Return: void
 */

void mul(char *num1, char *num2)
{
	int len1 = 0, len2 = 0, i, j, res_len, carry, n1, n2, sum;
	int *result;

	len1 = _strlen(num1);
	len2 = _strlen(num2);
	res_len = len1 + len2;
	result = _calloc(res_len, sizeof(int));

	if (result == NULL)
	{
		exit(98);
	}

	for (i = len1 - 1; i >= 0; i--)
	{
		carry = 0;
		n1 = num1[i] - '0';

		for (j = len2 - 1; j >= 0; j--)
		{
			n2 = num2[j] - '0';
			sum = n1 * n2 + result[i + j + 1] + carry;
			carry = sum / 10;
			result[i + j + 1] = sum % 10;
		}

		if (carry > 0)
			result[i + j + 1] += carry;
	}

	j = 0;
	while (result[j] == 0 && j < res_len - 1)
	{
		j++;
	}

	for (i = j; i < res_len; i++)
	{
		_putchar(result[i] + '0');
	}

	_putchar('\n');
	free(result);
}

/**
 * main - multiplies two positive numbers
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success, 98 on failure
 */

int main(int argc, char **argv)
{
	int i, j;

	if (argc != 3)
	{
		_puts("Error");
		exit(98);
	}

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (!_isdigit(argv[i][j]))
			{
				_puts("Error");
				exit(98);
			}
		}
	}

	mul(argv[1], argv[2]);
	return (0);
}
