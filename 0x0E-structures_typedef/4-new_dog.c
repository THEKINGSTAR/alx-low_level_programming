#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - struct initializing function
 * Description:'Write a function that creates a new dog.'
 *
 * @name: type = char *
 * @age: type = float
 * @owner: type = char *'
 *
 * Return:pointer to allocated new type
 * or NULL if fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog != NULL)
	{
		new_dog->name = name;
		new_dog->age = age;
		new_dog->owner = owner;

		return (new_dog);
		free(new_dog);
	}
	else
	{
		return (NULL);
	}
}
