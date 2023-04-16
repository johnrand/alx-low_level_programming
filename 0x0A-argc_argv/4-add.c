#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * is_positive_integer - Checks if a string
 * represents a positive integer
 * @str: the string checked
 *
 * Return: 1
 */

int __atribute__ ((unused)) is_positive_integer(char *str)
{
	if (*str == '-')
	{
		return (0);
	}
	while (*str != '\0')
	{
		if (!isdigit(*str))
		{
			return (0);
		}
		str++;
	}
	return (1);
}

/**
 * main - entry point
 * @argc: number of arguments passed
 * @argv: array containg number of arguments
 *
 * Return: 0
 */

int main(int argc, char **argv)
{
	int sum = 0;

	if (argc == 1)
	{
		printf("%d\n", sum);
		return (0);
	}
	for (int i = 1; i < argc; i++)
	{
		if (!is_positive_integer(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
