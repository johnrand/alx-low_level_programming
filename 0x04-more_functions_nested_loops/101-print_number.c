#include "main.h"

/**
 * print_number - print integer
 * @n: character to check
 */

void print_number(int n)
{
	unsigned int number;

	if (n < 0)
	{
		number = -n;
		_putchar('-');
	} else
	{
		number = n;
	}

	if (number / 10)
	{
		print_number(number / 10);
	}

	_putchar((number % 10) + '0');
}
