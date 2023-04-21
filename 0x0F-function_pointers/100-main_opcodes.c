#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program
 * @argc: Number of arguments
 * @argv: Array of argument strings
 *
 * Return: 0 on success, 1 if incorrect number of arguments
 * 2 if negative bytes
 */

int main(int argc, char *argv[])
{
	int i;
	int bytes;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		return (2);
	}

	void (*main_func)(void) = main;
	unsigned char *opcode = (unsigned char *)main;

	for (i = 0; i < bytes; i++)
	{
		printf("%02x ", opcode[i]);
	}
	printf("\n");

	return (0);
}
