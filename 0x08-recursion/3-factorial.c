#include "main.h"
#include <stdio.h>

/**
 * factorial - returns the factorial of a given number.
 * @n: number for which the factorial is calculated.
 *
 * Return: factorial of a number eler -1
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
