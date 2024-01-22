#ifndef _DOG_H
#define _DOG_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct dog - Define a new type struct dog with elements: name, age and owner
 * @name: name of dog struct
 * @age: age of dog struct
 * @owner: owner of dog struct
 *
 * Description: Struct name is dog &  struct var are created with its members
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif;
