#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * @argc: Argument count
 * @argv: Arguments passed to the program
 *
 * Description: Multiplies two positive numbers
 *
 * Return: 0 on success, 98 on failure
 */

int main(int argc, char *argv[])
{
        int len1, len2, i, j, carry, n1, n2, res;
        int *result;

        if (argc != 3)
        {
                printf("Error\n");
                return (98);
        }

        len1 = strlen(argv[1]);
        len2 = strlen(argv[2]);

        for (i = 0; i < len1; i++)
        {
                if (argv[1][i] < '0' || argv[1][i] > '9')
                {
                        printf("Error\n");
                        return (98);
                }
        }

        for (i = 0; i < len2; i++)
        {
                if (argv[2][i] < '0' || argv[2][i] > '9')
                {
                        printf("Error\n");
                        return (98);
                }
        }

        result = calloc(len1 + len2, sizeof(int));
        if (result == NULL)
                return (1);

        for (i = len1 - 1; i >= 0; i--)
        {
                carry = 0;
                n1 = argv[1][i] - '0';

                for (j = len2 - 1; j >= 0; j--)
                {
                        n2 = argv[2][j] - '0';
                        res = n1 * n2 + result[i + j + 1] + carry;
                        carry = res / 10;
                        result[i + j + 1] = res % 10;
                }

                if (carry != 0)
                        result[i + j + 1] += carry;
        }

        i = 0;
        while (result[i] == 0 && i < len1 + len2 - 1)
                i++;

        for (; i < len1 + len2; i++)
                printf("%d", result[i]);

        printf("\n");
        free(result);
        return (0);
}
