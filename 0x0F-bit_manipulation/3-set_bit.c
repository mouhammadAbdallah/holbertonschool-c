#include "holberton.h"

/**
 * power - power
 * @base: base
 * @exponent: exponent
 *
 * Return: res
 */
unsigned long int power(int base, unsigned int exponent)
{
	unsigned long int result = 1;

	for (; exponent > 0; exponent--)
	{
		result = result * base;
	}
	return (result);
}

/**
 * set_bit - set_bit
 * @n: unsigned long int: nb
 * @index: index
 *
 * Return: bit
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int tmp;

	if (index > sizeof(unsigned long int) * 8)
		return (-1);
	tmp = power(2, index);
	*n = *n | tmp;
	return (1);
}
