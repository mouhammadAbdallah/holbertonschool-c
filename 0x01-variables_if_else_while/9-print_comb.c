#include <stdio.h>

/**
 * main - using numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c = '0';

	while (c <= '9')
	{
		putchar(c++);
		if (c != ':')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
