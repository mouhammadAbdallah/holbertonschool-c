#include "holberton.h"

/**
 * print_last_digit - last digit
 *@n: int
 *
 * Return: absolute of n
 */
int print_last_digit(int n)
{
	n = (n >= 0) ? n : -n;
	_putchar('0' + n % 10);
	return (n % 10);
}
