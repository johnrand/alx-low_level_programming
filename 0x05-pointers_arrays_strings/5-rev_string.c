#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * rev_string - reverses a string
 * @s: pointer to a string
 *
 * Return: void
 */

void rev_string(char *s)
{
	size_t len = strlen(s);
	size_t i;
	char temp;

	for (i = 0; i < len / 2; i++)
	{
		temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
	}
}
