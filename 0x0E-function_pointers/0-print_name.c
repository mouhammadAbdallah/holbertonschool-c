#include "function_pointers.h"

/**
 * print_name - print_name
 * @name: str
 * @f: func pointer to a method that print
 *
 * void
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
