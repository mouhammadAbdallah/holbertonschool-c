#include "holberton.h"
#include <stdio.h>
/**
 * print_to_98 - printf.
 * @n: number
 *
 * Return: nothing.
 */
void print_to_98(int n)
{
	int i;

	for (i = n; i <= 97; i++)
		printf("%d, ", i);
	printf("98\n");
}
