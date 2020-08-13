#include <stdio.h>

/**
 * main - fibonacci
 *
 * Return: 0 Success.
 */
int main(void)
{
	long i, s0, s1, sn;

	s0 = 1;
	s1 = 2;
	printf("%ld, %ld, ", s0, s1);
	for (i = 3; i <= 43; i++)
	{
		sn = s0 + s1;
		s1 = sn;
		s0 = s1;
		printf("%ld, ", sn);
	}
	printf("%ld\n", s1 + s0);
	return (0);
}
