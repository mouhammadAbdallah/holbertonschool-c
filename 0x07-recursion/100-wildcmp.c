#include "holberton.h"

/**
 * wildcmp - cmp 2 str
 * @s1: string
 * @s2: string
 *
 * Return:  1 if identical
 */
int wildcmp(char *s1, char *s2)
{
	int i;

	if (s1[0] == '\0' && s2[0] == '\0')
		return (1);
	if (s1[0] == '\0' && s2[0] == '*' && s2[1] == '\0')
		return (1);
	if (s1[0] == '\0' || s2[0] == '\0')
		return (0);

	if (s2[0] == '*')
	{
		if (s1[0] == s2[1])
		{
			i = wildcmp(&s1[0], &s2[1]);
			if (i == 0)
				return (wildcmp(&s1[1], &s2[0]));
			return (i);
		}
		else if (s2[1] == '*')
			return (wildcmp(&s1[0], &s2[1]));
		else
			return (wildcmp(&s1[1], &s2[0]));
	}
	if (s1[0] != s2[0])
		return (0);
	return (wildcmp(&s1[1], &s2[1]));
}
