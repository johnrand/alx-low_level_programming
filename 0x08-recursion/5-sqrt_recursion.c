#include "main.h"
#include <stdio.h>

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

	int msqrt = _sqrt_recusion(n - 1);

	if (msqrt * msqrt == n)
	{
		return (sqrt);
	}
	else
	{
		return (-1);
	}
}
