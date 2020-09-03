#include "function_pointers.h"

/**
 * array_iterator - array_iterator
 * @array: array
 * @size: size
 * @action: func ptr
 *
 * void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (action != NULL && size > 0)
		for (i = 0; i < size; i++)
			action(array[i]);
}
