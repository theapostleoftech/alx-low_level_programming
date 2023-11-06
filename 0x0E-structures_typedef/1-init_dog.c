#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
#include "main.h"
/**
 * init_dog - initialize struct dog
 * @name: first member
 * @age: second member
 * @owner: third memeber
 *
 * Return: Always 0
 */
struct dog init_dog(char *name, float age, char *owner)
{
	struct *d;

	d = malloc(sizeof(struct dog));
	if (dog == NULL)
		return (NULL);
	d->name = name;
	d->age = age;
	d->owner = owner;
	return d;
}

