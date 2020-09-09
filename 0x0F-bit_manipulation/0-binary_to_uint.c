#include "holberton.h"

/**
 * pow_2 - pow_2
 * @n: 2 ^ n
 *
 * Return: 2 ^ n
 */
unsigned int pow_2(long int n)
{
	if (n == 0)
		return (1);
	return (2 * pow_2(n - 1));
}

/**
 * binary_to_uint - binary_to_uint
 * @b: number str
 *
 * Return: converted unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	long int len, i;
	unsigned int nb = 0;

	if (!b)
		return (0);
	for (len = 0; b[len]; len++)
		if (!(b[len] == '0' || b[len] == '1'))
			return (0);
	for (i = len - 1; i >= 0; i--)
		nb += pow_2((len - 1) - i) * (b[i] - '0');
	return (nb);
}
