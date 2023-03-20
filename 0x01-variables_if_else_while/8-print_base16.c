#include <stdio.h>

/**
 * main - Entry point
 * Description; Base 16 numbers
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char c;

	/* Print digits 0-9 */

	for (c = '0'; c <= '9'; c++)
	{
		putchar(c);
	}

	/* Print digits a-f */

	for (c = 'a'; c <= 'f'; c++)
	{
		putchar(c);
	}

	/* Print newline character */

	putchar('\n');
	return (0);
}
