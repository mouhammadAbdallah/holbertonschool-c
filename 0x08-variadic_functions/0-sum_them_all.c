#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sum
 * @n: count
 *
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	int s = 0;
	unsigned int i;
	va_list args;

	if (n == 0)
		return (0);
	va_start(args, n);
	for (i = 0; i < n; i++)
		s += va_arg(args, int);
	va_end(args);
	return (s);
}
