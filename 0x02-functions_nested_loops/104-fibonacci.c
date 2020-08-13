#include <stdio.h>

/**
 * main - print the first 98 fibonacci numbers.
 * Return: Nothing.
 */
int main(void)
{
	unsigned long count, i, j, k;

	i = 1;
	j = 2;
	printf("%lu, %lu, ", i, j);
	for (count = 3; count <= 98; count++)
	{
		k = i + j;
		i = j;
		j = k;
		printf("%lu", k);
		if (count == 98)
			putchar('\n');
		else
		{
			printf(", ");
		}
	}
	return (0);
}
