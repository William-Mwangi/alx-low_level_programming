#ifndef dog_h
#define dog_h

/**
 * struct dog - dog
 * @name: name
 * @age: age
 * @owner: owner
 *
 * Description: dog structure
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
