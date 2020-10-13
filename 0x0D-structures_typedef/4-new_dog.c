#include "dog.h"

/**
 * new_dog - new_dog
 * @name: str
 * @age: float
 * @owner: str
 *
 * Return: address of dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dg;
	unsigned int i;

	dg = malloc(sizeof(dog_t));
	if (dg == NULL)
		return (NULL);
	for (i = 0; name[i]; i++)
		;
	dg->name = malloc(sizeof(char) * (i + 1));
	if (dg->name == NULL)
	{
		free(dg);
		return (NULL);
	}
	for (i = 0; owner[i]; i++)
		;
	dg->owner = malloc(sizeof(char) * (i + 1));
	if (dg->owner == NULL)
	{
		free(dg);
		free(dg->name);
		return (NULL);
	}
	for (i = 0; name[i]; i++)
		dg->name[i] = name[i];
	dg->name[i] = name[i];
	dg->age = age;
	for (i = 0; owner[i]; i++)
		dg->owner[i] = owner[i];
	dg->owner[i] = owner[i];
	return (dg);
}
