#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - this will start the dog process.
 * @d: this will pointer to the dog.
 * @name: The name of the dog.
 * @age: the age of the dog.
 * @owner: The owner of the dog.
 *
 * Return: This refers to the do pointer
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (!d)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}

