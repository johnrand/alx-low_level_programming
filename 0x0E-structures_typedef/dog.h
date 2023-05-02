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

/**
 * struct dog - a structure for a dog
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 *
 * Description: a structure that stores information about a dog
 */

typedef struct dog dog_t;


/* function prototypes */
void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

dog_t *new_dog(char *name, float age, char *owner);

#endif /* DOG_H */
