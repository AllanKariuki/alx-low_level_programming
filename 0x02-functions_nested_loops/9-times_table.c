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
		for (c = 0; c <= 9; c++)
		{
			res = r * c;
			_putchar(res);
			_putchar('\n');
		}
	}
}
