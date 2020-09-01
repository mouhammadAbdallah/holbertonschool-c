#include "dog.h"

/**
 * free_dog - free_dog
 * @d: dog
 *
 * void
 */
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
