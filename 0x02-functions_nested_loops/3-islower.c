#include "holberton.h"

/**
 * _islower - is lower?
 *@c: a char
 *
 * Return: 1 if c is lower
 */
int _islower(int c);
{
	return (((c - 'a') >= 0) ? 1 : 0);
}
