#include <stdio.h>

/**
 * main - Entry point
 * Descrption: alphabet bot lowercase and uppercase
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		putchar(i);
	}
	for (i = 65; i <= 90; i++)
	{
		putchar(i);
	}

	putchar('\n');

	return (0);
}
