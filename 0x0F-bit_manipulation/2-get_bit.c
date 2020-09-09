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
	unsigned int i = 0;

	while (i < index && n > 1)
	{
		n = n >> 1;
		i++;
	}
	if (i == index)
		return (n % 2);
	return (-1);
}
