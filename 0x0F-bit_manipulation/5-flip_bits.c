#include "holberton.h"

/**
 * flip_bits - flip_bits
 * @n: unsigned long int: nb
 * @m: unsigned long int: nb
 *
 * Return: nb of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int res = 0;

	while (n != 0 || m != 0)
	{
		if ((n & 1) != (m & 1))
			res += 1;
		n = n >> 1;
		m = m >> 1;
	}
	return (res);
}
