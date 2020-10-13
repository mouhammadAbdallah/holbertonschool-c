#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - ADD
 * @argc: argc
 * @argv: arguments
 *
 * Return: 0 (Success)
 */
int main(int argc, char **argv)
{
	int i, j, s = 0;

	if (argc == 1)
	{
		puts("0");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				puts("Error");
				return (1);
			}
			j++;
		}
	}
	for (i = 1; i < argc; i++)
		s += atoi(argv[i]);
	printf("%d\n", s);
	return (0);
}
