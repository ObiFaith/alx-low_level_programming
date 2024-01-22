#include "dog.h"

/**
 * free_dog - a function that frees dogs.
 * @d: a pointer to struct dog
 */

void free_dog(dog_t *d)
{
	free(d);
}
