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
	int sqrt_m;
	int result;

	if (n < 0)
	{
		return (-1);
	}

	else if (n == 0 || n == 1)
	{
		return (n);
	}
	else
	{
		sqrt_m = _sqrt_recursion(n - 1);

		result = sqrt_m * sqrt_m;
		if (result < n)
		{
			return (sqrt_m + 1);
		}
		else if (result == n)
		{
			return (sqrt_m);
		}
		else
		{
			return (sqrt_m);
		}
	}
}
