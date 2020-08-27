#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * coins - number of coins
 * @n: cents
 * @c: array of coins
 *
 * void
 */
void coins(long int n, long int c[])
{
	if (n == 0)
		return;
	if (n >= 25)
	{
		c[4] += 1;
		coins(n - 25, c);
		return;
	}
	if (n >= 10)
	{
		c[3] += 1;
		coins(n - 10, c);
		return;
	}
	if (n >= 5)
	{
		c[2] += 1;
		coins(n - 5, c);
		return;
	}
	if (n >= 2)
	{
		c[1] += 1;
		coins(n - 2, c);
		return;
	}
	c[0] += 1;
	coins(n - 1, c);
}

/**
 * main - ADD
 * @argc: argc
 * @argv: arguments
 *
 * Return: 0 (Success)
 */
int main(int argc, char **argv)
{
	long int c[5], s = 0, i;

	c[0] = c[1] = c[2] = c[3] = c[4] = 0;
	if (argc != 2)
	{
		puts("Error");
		return (1);
	}
	s = atoi(argv[1]);
	if (s < 0)
	{
		puts("0");
		return (0);
	}
	coins(s, c);
	s = 0;
	for (i = 0; i < 5; i++)
	{
		s += c[i];
	}
	printf("%ld\n", s);
	return (0);
}
