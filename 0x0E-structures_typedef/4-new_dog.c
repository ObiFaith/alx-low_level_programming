#include "dog.h"

/**
 * new_dog -  a function that creates a new dog.
 * @name: name of the dog
 * @age: age of dog
 * @owner: dog's owner
 *
 * Return: a pointer to a struct dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog = malloc(sizeof(dog_t));

	if (dog == NULL)
		return (NULL);
	dog->name = name;
	dog->age = age;
	dog->owner = owner;

	return (dog);
}
