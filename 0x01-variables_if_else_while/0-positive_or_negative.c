#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - positive or negative
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	char *s;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		s = "positive";
	else if (n == 0)
		s = "zero";
	else
		s = "negative";
	printf("%d is %s\n", n, s);
	return (0);
}
