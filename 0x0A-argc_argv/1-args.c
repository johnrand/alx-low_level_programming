#include "main.h"
#include <stdio.h>

/**
 * main - entry point of program
 * @argc: number of arguments passed
 * @argv: array containing arguments passed
 *
 * Return: always(0)
 */

int main(int argc __attribute__((unused)), char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
