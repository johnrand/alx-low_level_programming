#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion - returns the value of x raised to power of y.
 * @x: base value
 * @y: exponent value
 *
 * Return: return x^y or -1 if y is < 0.
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
