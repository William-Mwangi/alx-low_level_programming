#include "dog.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * free_dog - free a dog
 * @d: the dog pointer
 * Return: void
 */

void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
