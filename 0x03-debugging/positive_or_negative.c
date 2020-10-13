#include <stdio.h>

/**
 * main - positive or negative
 *
 * Return: Always 0 (Success)
 */
void positive_or_negative(int i)
{
	int n;
	char *s;

	n = i;
	if (n > 0)
		s = "positive";
	else if (n == 0)
		s = "zero";
	else
		s = "negative";
	printf("%d is %s\n", n, s);
}
