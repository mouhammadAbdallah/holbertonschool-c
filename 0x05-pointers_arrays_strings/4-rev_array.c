#include "holberton.h"

/**
 * reverse_array - reverse array
 * @a: int array
 * @n: number
 *
 * void
 */
void reverse_array(int *a, int n)
{
	int array[n], i;

	for (i = 0; i < n; i++)
		array[i] = a[i];
	for (i = 0; i < n; i++)
		a[i] = array[n - i - 1];
}
