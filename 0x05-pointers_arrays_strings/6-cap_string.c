#include "holberton.h"

/**
 * cap_string - capitalized sentences
 * @s: str
 *
 * Return: string
 */
char *cap_string(char *s)
{
	int i = 0;

	if (s[i] <= 122 && s[i] >= 97)
		s[i++] += 'A' - 'a';
	while (s[i] != '\0')
	{

		if (s[i] <= 122 && s[i] >= 97 && (s[i - 1] == ' ' || s[i - 1] == '\t' || s[i - 1] == '\n' || s[i - 1] == ',' || s[i - 1] == ';' || s[i - 1] == '.' || s[i - 1] == '!' || s[i - 1] == '?' || s[i - 1] == '"' || s[i - 1] == '(' || s[i - 1] == ')' || s[i - 1] == '{' || s[i - 1] == '}'))
			s[i] += 'A' - 'a';
		i++;
	}
	return (s);
}
