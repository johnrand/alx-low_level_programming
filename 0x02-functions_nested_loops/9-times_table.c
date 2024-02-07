#include "main.h"

/**
 * print_number - prints the number
 * @num: the number
 *
 * Return: 0 success
 */

void print_number(int num)
{
	if (num < 10)
	{
		_putchar(' ');
		_putchar(num + '0');
	}
	else
	{
		_putchar(num / 10 + '0');
		_putchar(num % 10 + '0');
	}
}

/**
 * times_table - prints the times tamle
 *
 * Return: 0 success
 */

void times_table(void)
{
	int i, j, result;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			result = i * j;
			print_number(result);
			if (j < 9)
				_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
