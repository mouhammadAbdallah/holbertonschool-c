#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - print str
 * @separator: str separator
 * @n: count
 *
 * void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list arg;
	char *s;

	if (n == 0)
		return;
	va_start(arg, n);
	if (separator[0] == '\0')
		separator = "";
	for (i = 0; i < n - 1; i++)
	{
		s = va_arg(arg, char *);
		if (s[0] == '\0')
			s = "(nil)";
		printf("%s%s", s, separator);
	}
	s = va_arg(arg, char *);
	if (s == NULL)
		s = "(nil)";
	printf("%s\n", s);
	va_end(arg);
}
