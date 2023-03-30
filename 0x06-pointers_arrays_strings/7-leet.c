#include "main.h"
#include <stdio.h>

/**
 * leet - encodes a string into 1337
 * @str: pointer to the string to modify
 *
 * Return: pointer to the modified string
 */

char *leet(char *str)
{
	int i;
	int j;
	char *letters = "aeotlAEOTL";
	char *numbers = "430710";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; letters[j] != '\0'; j++)
		{
			if (str[i] == letters[j])
			{
				str[i] = numbers[j];
				break;
			}
		}
	}
	return (str);
}
