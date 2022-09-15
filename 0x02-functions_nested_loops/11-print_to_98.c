#include "main.h"

/**
 * print_to_98 - prints numbers from n to 98
 * @n: the starting integer
 * Return: void
 */

void print_to_98(int n)
{
	int i;

	for (i = n; i <= 98; i++)
	{
		_putchar((i / 10) + '0');
		_putchar(',');
		_putchar(' ');
	}
}
