#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - initialize struct dog
 * @d: struct dog pointer holding the memory location
 * @name: first member
 * @age: second member
 * @owner: third memeber
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{

	d = malloc(sizeof(struct dog));
	if (d != NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}

