#include <stdio.h>
#include <stdlib.h>

/**
 * print_opcodes - prints the opcodes of a given function
 * @start: a pointer to the start of the function
 * @n: the number of bytes to print
 *
 * Return: void
 */

void print_opcodes(char *start, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%02hhx", start[i]);
		if (i < n - 1)
			printf(" ");
	}
	printf("\n");
}

/**
 * main - entry point of the program
 * @argc: the number of arguments passed to the program
 * @argv: an array of pointers to the arguments
 *
 * Return: 0 on success, 1 if the number of arguments is incorrect,
 *         2 if the number of bytes is negative
 */

int main(int argc, char **argv)
{
	int n;
	char *start, *end;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	n = atoi(argv[1]);
	if (n <= 0)
	{
		printf("Error\n");
		return (2);
	}

	start = (char *) main;
	end = start + n;

	print_opcodes(start, n);

	return (0);
}
