#include "holberton.h"

/**
 * print_binary - print_binary
 * @n: unsigned long int
 *
 * void
 */
void print_binary(unsigned long int n)
{
	if (n == 0 || n == 1)
	{
		printf("%lu", n);
		return;
	}
	print_binary(n / 2);
	printf("%lu", n % 2);
}
