#ifndef DOG_H
#define DOG_H
#include <stdio.h>

/**
 * struct dog - Define a new type struct dog with the following elements:
 * @name: the name
 * @age: the age
 * @owner: the owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

typedef struct dog dog_t;

dog_t *new_dog(char *name, float age, char *owner);

void free_dog(dog_t *d);

#endif
