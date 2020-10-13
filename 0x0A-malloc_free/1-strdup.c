#include "holberton.h"
#include <stdlib.h>

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
 * _strdup - cp str with malloc
 * @str: str
 *
 * Return: pointer
 */
char *_strdup(char *str)
{
	unsigned int l, i;
	char *s;

	if (str == NULL)
		return (NULL);
	l = _strlen(str);
	s = (char *)malloc(sizeof(char) * (l + 1));
	if (s == NULL)
		return (NULL);
	for (i = 0; i <= l; i++)
		s[i] = str[i];
	return (s);
}
