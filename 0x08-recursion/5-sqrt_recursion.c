#include "main.h"
#include <stdio.h>
#include <math.h>

/**
 * _sqrt_recursion -  returns the natural square root of a number.
 * @n: number to which sqrt to be calculated
 *
 * Return: return sqrt , or -1.
 */

int _sqrt_recursion(int n)
{
	if (n == 0 || n == 1)
	{
		return (n);
	}

	int sqrt_m;

	sqrt_m = _sqrt_recursion(n - 1);

	if (sqrt_m * sqrt_m == n)
	{
		return (sqrt_m);
	}
	else
	{
		return (-1);
	}
}
