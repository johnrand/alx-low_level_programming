#include <stdio.h>

/**
 * main - Entry point
 * Description: print 1st 98 fibonacci starting from 1 and 2
 *
 * Return: Always (0) success
 */

int main(void)
{
	int n = 98;
	int fib1 = 1, fib2 = 2, fib_next;
	int i;

	printf("%d, %d", fib1, fib2);

	/* Generate and print the remaining Fibonacci numbers */
	for (i = 2; i < n; i++)
	{
		fib_next = fib1 + fib2;
		printf(", %d", fib_next);
		fib1 = fib2;
		fib2 = fib_next;
	}

	printf("\n");
	return (0);
}
