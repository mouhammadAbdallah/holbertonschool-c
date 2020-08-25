#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - print str
 * @format: format array
 *
 * void
 */
void print_all(const char *const format, ...)
{
	int i;
	va_list arg;
	char *s, *sep;

	va_start(arg, format);
	i = 0;
	while (format[i] != '\0')
	{
		if (format[i + 1] == '\0')
			sep = "\n";
		else
			sep = ", ";
		switch (format[i])
		{
		case 'c':
			printf("%c%s", va_arg(arg, int), sep);
			break;
		case 'i':
			printf("%d%s", va_arg(arg, int), sep);
			break;
		case 'f':
			printf("%f%s", va_arg(arg, double), sep);
			break;
		case 's':
			s = va_arg(arg, char *);
			if (s == NULL)
				s = "(nil)";
			printf("%s%s", s, sep);
			break;

		default:
			break;
		}
		i++;
	}
	va_end(arg);
}
