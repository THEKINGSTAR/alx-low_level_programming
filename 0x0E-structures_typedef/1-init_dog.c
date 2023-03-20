#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - struct initializing function
 * Description:'Write a function that initialize a variable of type struct dog
 * @d: struct of type dog
 * @name: type = char *
 * @age: type = float
 * @owner: type = char *'
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
