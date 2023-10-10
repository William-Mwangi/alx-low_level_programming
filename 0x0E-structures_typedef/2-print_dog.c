#include "dog.h"
#include <stdio.h>
#include <stddef.h>
#include <string.h>

/**
 * print_dog - print dog
 * @d: dog struct
 * Return: nothing
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
		{
			printf("Name: (nil)");
		}
		if (d->owner == NULL)
		{
			printf("Owner: (nil)");
		}
		printf("Name: %s\n", d->name);
		printf("Age: %.6f\n", (d->age >= 0) ? d->age : -1.0);
		printf("Owner: %s\n", d->owner);
	}
}
