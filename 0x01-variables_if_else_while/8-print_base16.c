#include <stdio.h>

/**
 * main - using numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c = '0';

	while (c <= 'f')
	{
		putchar(c++);
		if (c == ':')
			c  = 'a';
	}
	putchar('\n');
	return (0);
}
