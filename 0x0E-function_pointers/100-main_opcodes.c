#include "function_pointers.h"

/**
 * main - main
 * @argc: nb of args
 * @argv: args
 *
 * Return: 0 (Success)
 */
int main(int argc, char **argv)
{
	int i, nb;
	char *main_add = (char *)main;

	if (argc != 2)
	{
		puts("Error");
		exit(1);
	}
	if (atoi(argv[1]) <= 0)
	{
		puts("Error");
		exit(2);
	}
	nb = atoi(argv[1]);
	for (i = 0; i < nb - 1; i++)
		printf("%02hhx ", main_add[i]);
	printf("%02hhx\n", main_add[i]);
}