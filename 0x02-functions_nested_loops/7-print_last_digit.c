#include "main.h"

/**
 * print_last_digit - prints the last digit
 * @n: the number being checked
 * Return: the last digit
 */

int print_last_digit(int n)
{
	int dig, p;

	dig = n % 10;

	if (dig < 0)
		dig = -dig;
	p = '0' + dig;
	_putchar(p);
	return (dig);
}
