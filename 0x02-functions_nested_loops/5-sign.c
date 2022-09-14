#include "main.h"

/**
 * print_sign - prints the sign and returns 1, 0, or -1
 * @n: the integer being tested
 * Return: 1, 0, -1
 */

int print_sign(int n)
{
	int val;

	if (n < 0)
	{
		val = -1;
		_putchar(45);
	}
	else if (n = 0)
	{
		val = 0;
		_putchar(48);
	}
	else
	{
		val = 1;
		_putchar(43);
	}

	return (val);
}
