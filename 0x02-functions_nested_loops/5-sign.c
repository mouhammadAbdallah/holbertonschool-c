#include "holberton.h"

/**
 * print_sign - is positive or negative?
 *@n: a char
 *
 * Return: 1 if n is positive
 */
int print_sign(int n)
{
	int result;

	result = (n > 0) ? 1 : (n == 0) ? 0 : -1;
	switch (result)
	{
	case 1:
		_putchar('+');
		break;
	case 0:
		_putchar('0');
		break;
	case -1:
		_putchar('-');
		break;
	}
	return (result);
}
