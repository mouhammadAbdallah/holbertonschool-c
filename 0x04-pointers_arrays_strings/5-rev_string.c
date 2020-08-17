#include "holberton.h"
#include <stdio.h>

/**
 * rev_string - str reverse
 * @s: a str
 *
 * void
 */
void rev_string(char *s)
{
	int i = 0, l;

	while (s[i] != '\0')
	{
		i++;
	}
	l = i;
	char tmp[l];
	for (i = 0; i < l; i++)
		tmp[i] = s[i];
	for (i = l - 1; i >= 0; i--)
		s[l - i - 1] = tmp[i];
}
