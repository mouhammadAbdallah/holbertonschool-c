#include "holberton.h"

/**
 * string_toupper - upper letters
 * @s: int array
 *
 * Return: string
 */
char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{

		if (s[i] <= 122 && s[i] >= 97)
			s[i] += 'A' - 'a';
		i++;
	}
	return (s);
}
