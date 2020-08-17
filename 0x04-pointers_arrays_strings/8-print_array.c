#include "holberton.h"
#include <stdio.h>

/**
 * print_array - array
 * @a: array
 * @n: number
 *
 * void
 */
void print_array(int *a, int n)
{
	int i;

	if (n == 0)
		return;
	for (i = 0; i < n - 1; i++)
		printf("%d, ", a[i]);
	printf("%d\n", a[n - 1]);
}
