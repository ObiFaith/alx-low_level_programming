#include "dog.h"

/**
 * init_dog - a function that initialize a variable of type struct dog
 * @d: a pointer to struct
 * @name: string of the dog name
 * @age: dog's age
 * @owner: string of the dog's owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = strdup(name);
	d->age = age;
	d->owner = strdup(owner);

	if (d->name == NULL || d->owner == NULL)
	{
		free(d->name);
		free(d->owner);
		return;
	}
}
