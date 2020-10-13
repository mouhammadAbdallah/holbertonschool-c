#include "holberton.h"

/**
 * _sqrt - sqrt
 * @n: number
 * @try: number
 *
 * Return: sqrt n
 */
int _sqrt(int n, int try)
{
	if (try * try > n)
		return (-1);
	if (try * try == n)
		return (try);

	return (_sqrt(n, try + 1));
}

/**
 * _sqrt_recursion - sqrt
 * @n: number
 *
 * Return: sqrt n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	return (_sqrt(n, 1));
}
