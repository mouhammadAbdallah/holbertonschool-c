#include "holberton.h"

/**
 * factorial - factorial recursion
 * @n: number
 *
 * Return: len
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
