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
 * str_concat - concatenate
 * @s1: str
 * @s2: str
 *
 * Return: pointer
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int l1, l2, i;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	l1 = _strlen(s1);
	l2 = _strlen(s2);
	s = (char *)malloc(sizeof(char) * (l1 + l2 + 1));
	if (s == NULL)
		return (NULL);
	for (i = 0; i < l1; i++)
		s[i] = s1[i];
	for (i = 0; i <= l2; i++)
		s[i + l1] = s2[i];
	return (s);
}
