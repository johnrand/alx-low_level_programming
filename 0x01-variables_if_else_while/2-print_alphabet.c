#include <stdio.h>

/**
 * main - Entry point
 * Description: Printing alphabet in lowercase
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar('a' + i);
	}

	putchar('\n');

	return (0);
}

