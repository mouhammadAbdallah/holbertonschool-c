#include "holberton.h"

/**
 * _strlen - str len
 * @s: a pointer
 *
 * Return: len
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}

/**
 * puts_half - half word
 * @str: a str
 *
 * void
 */
void puts_half(char *str)
{
	int l, i, c;

	l = _strlen(str);
	c = (l % 2 == 0) ? l / 2 : (l - 1) / 2 + 1;
	for (i = c; i < l; i++)
		_putchar(str[i]);
	_putchar('\n');
}
