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
 * _strncat - concatenate
 * @dest: a str
 * @src: a str
 * @n: number
 *
 * Return: str
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, l, lsrc;

	lsrc = _strlen(src);
	l = _strlen(dest);
	lsrc = (lsrc >= n) ? n : lsrc;
	for (i = 0; i < lsrc; i++)
		dest[l + i] = src[i];
	dest[_strlen(dest)] = '\0';
	return (dest);
}
