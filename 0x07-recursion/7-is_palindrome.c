#include "holberton.h"

/**
 * palaindrome - is palindrome
 * @s: string
 * @l: str len
 *
 * Return:  1 if palaindrome
 */
int palaindrome(char *s, int l)
{
	if (l == 0 || l == 1)
		return (1);
	if (s[0] != s[l - 1])
		return (0);

	return (palaindrome(&s[1], l - 2));
}

/**
 * _strln_recursion - strlen
 * @s: str
 *
 * Return: len
 */
int _strln_recursion(char *s)
{
	if (s[0] == '\0')
		return (0);
	return (1 + _strln_recursion(&s[1]));
}

/**
 * is_palindrome - is palindrome
 * @s: string
 *
 * Return:  1 if palaindrome
 */
int is_palindrome(char *s)
{
	int l = _strln_recursion(s);

	return (palaindrome(s, l));
}
