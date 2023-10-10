#include "dog.h"
#include <string.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * new_dog - creating a new dog
 * @name: name
 * @age: age
 * @owner: owner
 * Return: new instance of dog_t
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *n_dog;

	n_dog = malloc(sizeof(dog_t));
	if (n_dog == NULL)
	{
		return (NULL);
	}
	n_dog->name = strdup(name);
	n_dog->age = age;
	n_dog->owner = strdup(owner);
	if (n_dog->owner == NULL || n_dog->name == NULL)
	{
		free(n_dog->name);
		free(n_dog->owner);
		free(n_dog);
		return (NULL);
	}
	return (n_dog);
}
