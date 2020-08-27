#include <stdarg.h>

#ifndef _VARIADIC_FUNCTIONS_H_
#define _VARIADIC_FUNCTIONS_H_

void _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * struct functionkey - a key for picking functions to use for printing
 * in 3-print_all.c
 *
 * @f: function to use for printing
 * @spec: character specifier
 */
typedef struct functionkey
{
	void (*f)(va_list);
	char spec;
} functionkey;

#endif
