#include "main.h"
#include <stdio.h>

/**
 * main - entry point of program
 * @argc: number of arguments passed
 * @argv: array containing arguments passed
 *
 * Return: always(0)
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
