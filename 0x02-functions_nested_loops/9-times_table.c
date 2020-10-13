#include "holberton.h"

/**
 * times_table - table.
 *
 * Return: nothing.
 */
void times_table(void)
{
	int i, j, a, u, d;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			a = i * j;
			d = a / 10;
			u = a % 10;
			if (d != 0)
				_putchar('0' + d);
			_putchar('0' + u);
			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
				if (i * (j + 1) < 10)
					_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
