#include "main.h"

/**
 * print_most_numbers - prints the numbers from 0 to 9, excluding 2 and 4,
 *                     followed by a new line
 *
 * This function uses a for loop to iterate through the numbers from 0 to 9,
 * and for each number, it checks if it is equal to 2 or 4. If it is not,
 * it uses _putchar to print the corresponding character. After printing all
 * the numbers, it prints a newline character to move to the next line.
 *
 * Return: void
 */

void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i != 2 && i != 4)
		{
			_putchar(i + '0');
		}
	}

		_putchar('\n');
}
