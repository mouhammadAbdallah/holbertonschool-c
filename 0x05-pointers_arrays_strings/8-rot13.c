#include "holberton.h"

/**
 * rot13 - coding
 * @s: str
 *
 * Return: string
 */
char *rot13(char *s)
{
	int i = 0;
	char a, z;

	while (s[i] != '\0')
	{
		if ((s[i] >= 97 && s[i] <= 122) || (s[i] >= 65 && s[i] <= 90))
		{
			a = (s[i] <= 90) ? 'A' : 'a';
			z = (a == 'a') ? 'z' : 'Z';
			s[i] = (s[i] + 13 <= z) ? s[i] + 13 : s[i] + 13 - z + a - 1;
		}
		i++;
	}
	return (s);
}
