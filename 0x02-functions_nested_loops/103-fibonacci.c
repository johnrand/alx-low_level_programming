#include <stdio.h>

/**
 * main - Entry point
 * Description: print fibonacci sequence startin at 1 and 2 and
 * print sum of the even-valued terms,
 *
 * Return: Always (0) success
 */

int main(void)
{
	int n = 4000000;
	long int fib1 = 1, fib2 = 2, fib_next;
	long int sum;

	/* Iterate through Fibonacci sequence */
	while (fib2 <= n)
	{
		if (fib2 % 2 == 0)
		{
			sum += fib2;
		}

		fib_next = fib1 + fib2;
		fib1 = fib2;
		fib2 = fib_next;
	}

	printf("%ld\n", sum);
	return (0);
}
