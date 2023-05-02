#include "dog.h"

/**
 * free_dog - frees memory previously allocated for a dog_t struct
 * @d: pointer to the dog_t struct to free
 *
 * Return: void
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
