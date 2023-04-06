#include "main.h"
#include <stdio.h>
#include <math.h>

/**
 * check_prime - checks if a number is prime
 *
 * @n: number to check
 * @div: divisor to check against
 *
 * Return: 1 if @n is prime, 0 otherwise
 */

int check_prime(int n, int div)
{
	if (n % div == 0)
	{
		return (0);
	}
	else if (div == n / 2)
	{
		return (1);
	}
	else if (div < n / 2)
	{
		return (check_prime(n, div + 1));
	}
	else
	{
		return (1);
	}
}

/**
 * is_prime_number - checks if a number is prime
 *
 * @n: number to check
 *
 * Return: 1 if @n is prime, 0 otherwise
 */

int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}
	else if (n == 2)
	{
		return (1);
	}
	else
	{
		return (check_prime(n, 2));
	}
}

