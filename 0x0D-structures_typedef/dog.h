#ifndef DOG_H
#define DOG_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct dog - struct
 * @name: str
 * @age: float
 * @owner: str
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

int _putchar(char c);

#endif /* DOG_H */
