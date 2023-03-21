#include "dog.h"
#include <stdlib.h>

/**
 * print_dog - struct initializing function
 * Description:'Write a function that prints a struct dog
 * If an element of d is NULL,
 * print (nil) instead of this element. (if name is NULL, print Name: (nil))
 * If d is NULL print nothing.
 * @d: struct of type dog
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL || d->name[0] == '\0')
		{
			printf("Name: (nill)\n");
		}
		else
		{
			printf("Name: %s\n", d->name);
		}
		printf("Age: %.6f\n", d->age);
		if (d->owner == NULL || d->owner[0] == '\0')
		{
			printf("Owner: (nill)\n");
		}
		else
		{
			printf("Owner: %s\n", d->owner);
		}
	}
	else
	{
		return;
	}
}
