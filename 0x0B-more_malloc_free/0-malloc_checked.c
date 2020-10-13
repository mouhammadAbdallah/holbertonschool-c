#include "holberton.h"

/**
 * malloc_checked - allocate memory
 * @b: bytes
 *
 * Return: void pointer need cast
 */
void *malloc_checked(unsigned int b)
{
	void *c;

	c = malloc(b);
	if (!c)
		exit(98);
	return (c);
}
