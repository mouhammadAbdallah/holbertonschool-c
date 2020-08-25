#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - sum
 * @n: count
 *
 * Return: 0 (Success)
 */
int sum_them_all(const unsigned int n, ...)
{
	int s = 0, i;
	va_list args;

	if (n == 0)
		return (0);
	va_start(args, n);
	for (i = 0; i < n; i++)
		s += va_arg(args, int);
	va_end(args);
	return (s);
}
