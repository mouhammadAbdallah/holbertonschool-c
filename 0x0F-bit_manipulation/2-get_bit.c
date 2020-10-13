#include "holberton.h"

/**
 * get_bit - get_bit
 * @n: unsigned long int: nb
 * @index: index
 *
 * Return: bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8)
		return (-1);
	n = n >> index;
	if (n & 1)

		return (1);
	else
		return (0);
}
