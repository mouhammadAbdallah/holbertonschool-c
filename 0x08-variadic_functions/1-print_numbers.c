#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - print nbs
 * @separator: str separator
 * @n: count
 *
 * void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list arg;

	if (n == 0)
		return;
	va_start(arg, n);
	if (separator==NULL)
		separator = "";
	for (i = 0; i < n - 1; i++)
	{
		printf("%d%s", va_arg(arg, int), separator);
	}
	printf("%d\n", va_arg(arg, int));
	va_end(arg);
}
