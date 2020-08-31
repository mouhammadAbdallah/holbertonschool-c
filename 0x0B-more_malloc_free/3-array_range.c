#include "holberton.h"

/**
 * array_range - array
 * @min: nb
 * @max: nb
 *
 * Return: array of str
 */
int *array_range(int min, int max)
{
	int *ptr, l, i, j;

	if (max > min)
		return (NULL);
	l = max - min + 1;
	ptr = malloc(sizeof(int) * l);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = min, j = 0; i <= max; i++, j++)
		ptr[j] = i;
	return (ptr);
}
