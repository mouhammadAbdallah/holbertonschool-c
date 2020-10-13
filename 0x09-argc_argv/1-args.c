#include "holberton.h"
#include <stdio.h>

/**
 * main - print arg number
 * @argc: argc
 * @argv: arguments
 *
 * Return: 0 (Success)
 */
int main(int argc, char **argv __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
