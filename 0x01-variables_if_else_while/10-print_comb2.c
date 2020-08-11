#include <stdio.h>

/**
 * main - 00 .. 99
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char i, j;

	for (i = '0'; i <= '9'; i++)
		for (j = '0'; j <= '9'; j++)
		{
			putchar(i);
			putchar(j);
			if ((i != '9') || (j != '9'))
			{
				putchar(',');
				putchar(' ');
			}
		}
	putchar('\n');
	return (0);
}
