#include <stdio.h>
/**
 * main - Entry point
 * Description: print 1st 50 fibonacci starting from 1 and 2
 *
 * Return: Always (0) success
 */

int main(void)
{
	int n = 50;
	int fib[n];
	int i;

	/* First two Fibonscii */
	fib[0] = 1;
	fib[1] = 2;

	/* Fibonacci starting from the third one */
	for (i = 2; i < n; i++)
	{
		fib[i] = fib[i - 1] + fib[i - 2];
	}

	/* Print them separated comma and space */
	for (i = 0; i < n; i++)
	{
		printf("%d", fib[i]);
		if (i != n - 1)
		{
			printf(", ");
		}
	}

	printf("\n");

	return (0);
}
