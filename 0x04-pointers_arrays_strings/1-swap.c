#include "holberton.h"

/**
 * swap_int - swap
 * @a: a pointer
 * @b: a pointer
 *
 * void
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
