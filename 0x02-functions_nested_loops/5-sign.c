#include "holberton.h"

/**
 * print_sign - is positive or negative?
 *@n: a char
 *
 * Return: 1 if n is positive
 */
int print_sign(int n)
{
	return ((n > 0) ? 1 : (n == 0) ? 0 : -1);
}
