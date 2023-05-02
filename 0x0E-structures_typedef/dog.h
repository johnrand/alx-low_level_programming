#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Structure representing a dog
 * @name: Name of the dog (string)
 * @age: Age of the dog (float)
 * @owner: Owner of the dog (string)
 *
 * Description: This structure represents a
 * dog with its name, age, and owner.
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/* function prototypes */
void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

/**
 * dog_t - typedef for struct dog
 */

typedef struct dog dog_t;

#endif /* DOG_H */
