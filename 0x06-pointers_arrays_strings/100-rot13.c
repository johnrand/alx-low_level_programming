#include "main.h"

/**
 * rot13 - encodes a string using rot13.
 * @str: The string to be encoded.
 *
 * Return: The encoded string.
 */
char *rot13(char *str)
{
	char *s = str;
	char alphabet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*s)
	{
		int i = 0;

		while (i < 52)
		{
			if (*s == alphabet[i])
			{
				*s = rot13[i];
				break;
			}
			i++;
		}
		s++;
	}
	return (str);
}
