#ifndef _DOG_H
#define _DOG_H

#include "main.h"

/**
 * struct dog - This is the dog info.
 * @name: The name of dog.
 * @age: The age of the dog.
 * @owner: The display of dog's owner
 *
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

/* function for typedef dog_t */
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif


