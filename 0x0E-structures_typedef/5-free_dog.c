#include "dog.h"
#include <stdlib.h>

/**
 * free_dog ->will free memory allocated for a struct dog.
 * @d: The dog struct to free.
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->owner);
	free(d->name);
	free(d);
}
