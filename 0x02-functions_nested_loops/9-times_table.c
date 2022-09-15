#include "main.h"

/**
 * times_table - prints times table
 * Return: void
 */

void times_table(void)
{
	int r, c, res;

	for (r = 0; r <= 9; r++)
	{
		_putchar('0');

		for (c = 1; c <= 9; c++)
		{
			res = c * r;

			_putchar(',');
			_putchar(' ');

			if (res <= 9)
				_putchar(' ');
			else
				_putchar((res / 10) + '0');

			_putchar((res % 10) + '0');
		}
		_putchar('\n');
	}
}
