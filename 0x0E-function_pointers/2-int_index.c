#include "function_pointers.h"

/**
 * int_index - int_index
 * @array: array
 * @size: size
 * @cmp: func ptr compare
 *
 * Return: index or -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	for (i = 0; cmp(array[i]) == 0 && i < size; i++)
		;
	return ((i == size) ? -1 : i);
}
