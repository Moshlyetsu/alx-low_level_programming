#include <stdlib.h>
#include "dog.h"

/**
 * init_dog -> will initialize a variable of type struct dog.
 * @d: the pointer to struct dog to initialize.
 * @name: 1st element to initialize.
 * @age: 2nd element to initialize.
 * @owner: 3rd pointer element to initialize.
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
