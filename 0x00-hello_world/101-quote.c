#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point of the program
 * Description: Prints to the standard error and returns zero.
 *
 * Return: Always 1 (success)
 */

int main(void)
{
	const char message[10];

	message[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(STDERR_FILENO, message, sizeof(message) - 1);

	return (1);
}
