#include "holberton.h"

/**
 * _strReplace - replace
 * @s: str
 * @from: char
 * @to: char
 *
 * Return: string
 */
char *_strReplace(char *s, char from, char to)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == from)
			s[i] = to;
		i++;
	}
	return (s);
}

/**
 * leet - coding
 * @s: str
 *
 * Return: string
 */
char *leet(char *s)
{
	_strReplace(s, 'a', '4');
	_strReplace(s, 'A', '4');
	_strReplace(s, 'e', '3');
	_strReplace(s, 'E', '3');
	_strReplace(s, 'o', '0');
	_strReplace(s, 'O', '0');
	_strReplace(s, 't', '7');
	_strReplace(s, 'T', '7');
	_strReplace(s, 'l', '1');
	_strReplace(s, 'L', '1');
	return (s);
}
