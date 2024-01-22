
#ifndef _DOG_H
#define _DOG_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct dog - Structure for a dogs
 *
 * @name: name for each dog
 * @age: age of each dog
 * @owner: the owner of a dog
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

struct dog dog_var;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif

