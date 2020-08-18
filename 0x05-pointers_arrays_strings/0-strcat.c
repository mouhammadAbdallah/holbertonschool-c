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
 * _strcat - concatenate
 * @dest: a str
 * @src: a str
 *
 * Return: str
 */
char *_strcat(char *dest, char *src)
{
	int i, l;

	l = _strlen(dest);
	for (i = 0; i < _strlen(src); i++)
		dest[l + i] = src[i];
	dest[_strlen(dest)] = '\0';
	return (dest);
}
