#include "holberton.h"

/**
 * prime - prime
 * @n: number
 * @try: number
 *
 * Return: prime 1 or 0
 */
int prime(int n, int try)
{
	if (n % try == 0)
		return (0);
	if (try > n / 2)
		return (1);

	return (prime(n, try + 1));
}

/**
 * is_prime_number - is prime
 * @n: number
 *
 * Return: sqrt 0 or 1
 */
int is_prime_number(int n)
{
	if (n <= 0)
		return (0);
	if (n == 1)
		return (1);
	return (prime(n, 2));
}
