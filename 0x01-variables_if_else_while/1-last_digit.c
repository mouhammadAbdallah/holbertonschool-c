#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - last digit
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	char *s;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n % 10 > 5)
		s = "and is greater than 5";
	else if (n % 10 == 0)
		s = "and is 0";
	else
		s = "and is less than 6 and not 0";
	printf("Last digit of %d is %d %s\n", n, n % 10, s);
	return (0);
}
