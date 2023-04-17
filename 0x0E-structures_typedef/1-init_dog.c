#include "dog.h"

/**
 * init_dog - Initializes a struct dog
 * @d: Pointer to struct dog
 * @name: Name of the dog (string)
 * @age: Age of the dog (float)
 * @owner: Owner of the dog (string)
 *
 * Description: This function initializes a struct dog with the provided
 * name, age, and owner.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
