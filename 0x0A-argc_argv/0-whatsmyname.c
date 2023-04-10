#include <stdio.h>

/**
 * main - entry point of the program
 * @argc: number of commands
 * @argv: pointer to characters
 *
 * Return: always (0)
 */

int main(int argc, char *argv[])
{
	int i;
	char *name_of_program;

	*name_of_program = argv[0];
	i = 0;

	while (name_of_program[i] != '\0')
	{
		_putchar(name_of_programe[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
