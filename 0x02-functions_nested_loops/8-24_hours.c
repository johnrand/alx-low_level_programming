#include "main.h"

void print_two_digits(int num);

/**
 * print_two_digits - prints two digits
 * @num: the number
 *
 * Return: always (0)
 */

void print_two_digits(int num)
{
	_putchar('0' + num / 10);
	_putchar('0' + num % 10);
}

/**
 * jack_bauer - prints every minute of day
 *
 * Return:always (0)
 */

void jack_bauer(void)
{
	int hour, minute;

	for (hour = 0; hour < 24; hour++)
	{
		for (minute = 0; minute < 60; minute++)
		{
			print_two_digits(hour);
			_putchar(':');
			print_two_digits(minute);
			_putchar('\n');
		}
	}
}
