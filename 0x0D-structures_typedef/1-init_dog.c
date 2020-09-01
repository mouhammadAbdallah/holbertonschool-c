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
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
