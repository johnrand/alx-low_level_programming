#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints the content of struct dog
 * @d: pointer to struct dog
 *
 * Return: void
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	printf("Name: ");
	if (d->name == NULL)
	{
		printf("(nil)\n");
	}
	else
	{
		printf("%s\n", d->name);
	}

	printf("Age: ");
	if (d->age < 0)
	{
		printf("(nil)\n");
	}
	else
	{
		printf("%.6f\n", d->age);
	}

	printf("Owner: ");
	if (d->owner == NULL)
	{
		printf("(nil)\n");
	}
	else
	{
		printf("%s\n", d->owner);
	}
}
