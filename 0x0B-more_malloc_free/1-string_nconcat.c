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
 * string_nconcat - concatenate str
 * @s1: str
 * @s2: str
 * @n: nb of char
 *
 * Return: new str
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int l, i, l1, l2;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";
	l1 = _strlen(s1);
	l2 = _strlen(s2);
	n = (l2 >= n) ? n : l2;
	l = l1 + n + 1;
	s = malloc(sizeof(*s) * l);
	if (!s)
		return (NULL);
	for (i = 0; i < l - 1; i++)
	{
		if (i < l1)
			s[i] = s1[i];
		else
			s[i] = s2[i - l1];
	}
	s[l] = '\0';
	return (s);
}
