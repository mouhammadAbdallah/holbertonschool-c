#include <stdio.h>

/**
 * main - 000 .. 999 special
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j, k, l;

	for (i = 0; i <= 9; i++)
		for (j = 0; j <= 8; j++)
			for (k = i; k <= 9; k++)
				for (l = j + 1; l <= 9; l++)
				{
					putchar('0' + i);
					putchar('0' + j);
					putchar(' ');
					putchar('0' + k);
					putchar('0' + l);
					if ((i != 9) || (j != 8) || (k != 9) || (l != 9))
					{
						putchar(',');
						putchar(' ');
					}
				}
	putchar('\n');
	return (0);
}
