#include "holberton.h"

/**
 * print_alphabet - alphabet
 *
 * void
 */
void print_alphabet(void)
{
	int i = 0;

	for (i = 0; i < 26; i++)
	{
		_putchar('a' + i);
	}
	_putchar('\n');
}
