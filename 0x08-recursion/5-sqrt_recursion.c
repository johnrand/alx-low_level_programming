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
		int i;

		i = 1;

		while (i * i <= n)
		{
			if (i * i == n)
			{
				return (n);
			}
			i++;
		}
		return (-1);
	}
}
