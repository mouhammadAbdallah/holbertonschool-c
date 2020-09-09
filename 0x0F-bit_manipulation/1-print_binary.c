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
		_putchar('0' + n);
		return;
	}
	print_binary(n / 2);
	_putchar('0' + n % 2);
}
