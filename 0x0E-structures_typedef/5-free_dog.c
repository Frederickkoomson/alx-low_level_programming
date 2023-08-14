#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - free(memory) dah dog and get fined by animal control
 * @d: this will start pointing.
 *
 * Return: this will output nothing 
 */
void free_dog(dog_t *d)
{
	if (!d)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}

