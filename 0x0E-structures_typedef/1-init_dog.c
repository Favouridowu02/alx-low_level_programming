#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - Write a function that initialize a variable of type struct dog
 * @d: the pointer to the structure dog
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owners name
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
