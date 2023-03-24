#include "main.h"

/**
 * print_numbers - prints the numbers from 0 to 9 followed by a new line
 *
 * This function uses a for loop to iterate through the numbers from 0 to 9,
 * and for each number, it uses _putchar to print the corresponding character.
 * After printing all the numbers, it prints a newline character to move to
 * the next line.
 *
 * Return: void
 */

void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		_putchar(i + '0');
	}

	_putchar('\n');
}
