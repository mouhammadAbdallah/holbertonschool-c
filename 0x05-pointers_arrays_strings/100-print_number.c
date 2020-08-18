#include "holberton.h"

/**
 * print_number - print number
 * @n: number
*
* void
*/

void print_number(int n)
{
	int i, k, j = 1, tmp = n;

	if (n < 0)
	{
		_putchar('-');
		n = n * -1;
	}

	while (tmp / 10 != 0)
	{
		tmp = tmp / 10;
		j = j * 10;
	}
	k = j;
	for (i = 1; i <= k; i = i * 10)
	{
		if (j != 1)
			_putchar(n / j + '0');
		else
			_putchar(n + '0');
		n = n % j;
		j = j / 10;
	}
}
