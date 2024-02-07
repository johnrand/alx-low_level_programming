#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: number
 *
 * Return: value of last digit
 */

int print_last_digit(int n)
{
	/* get the absolute value of number */
	n = n < 0 ? -n: n;
	return (n % 10);
}
