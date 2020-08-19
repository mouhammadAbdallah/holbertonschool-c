#include "holberton.h"

/**
 * _strchr - look for chr
 * @s: str
 * @c: chr
 *
 * Return: pointer to char
 */
char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (&s[i]);
		i++;
	}
	return (0);
}

/**
 * _strspn - find bytes
 * @s: str
 * @accept: str
 *
 * Return: number of accepted bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0, l = 0;

	while (s[i] != '\0')
	{
		if (_strchr(accept, s[i]))
			l++;
		else
			break;
		i++;
	}
	return (l);
}
