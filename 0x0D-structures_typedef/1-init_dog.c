#include "dog.h"

/**
 * init_dog - init_dog
 * @d: dog
 * @name: str
 * @age: float
 * @owner: str
 *
 * void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	unsigned int i;

	for (i = 0; name[i]; i++)
		d->name[i] = name[i];
	d->name[i] = name[i];
	d->age = age;
	for (i = 0; owner[i]; i++)
		d->owner[i] = owner[i];
	d->owner[i] = owner[i];
}
