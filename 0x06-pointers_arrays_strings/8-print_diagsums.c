#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - sum of diagonals of a matrix
 * @a: array of 8 pointer
 * @size: size of square
 *
 * void
 */
void print_diagsums(int *a, int size)
{
	int i, s = 0;

	for (i = 0; i < size * size; i = i + size + 1)
		s += a[i];
	printf("%d, ", s);
	s = 0;
	for (i = size - 1; i < size * size - size + 1; i = i + size - 1)
	{
		s += a[i];
	}
	printf("%d\n", s);
}
