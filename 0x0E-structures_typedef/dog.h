#ifndef HEADER_FILE
#define HEADER_FILE

#include <stdio.h>
#include <stdlib.h>

/**
 * struct dog - struct
 * Description:'Define a new type struct dog with the following elements
 * @name: type = char *
 * @age: type = float
 * @owner: type = char *'
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);


#endif
