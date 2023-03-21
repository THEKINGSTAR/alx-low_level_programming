#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - struct initializing function
 * Description:'Write a function that free dog.'
 *
 * @d: structure
 *
 * Return:has no return value
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		/*free(d->age);*/
		free(d->owner);
		free(d);
	}
}
