#include "main.h"
#include "stdio.h"

/**
 * print_to_98 - prints numbers from n to 98
 * @n: the starting integer
 * Return: void
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		while (n <= 98)
		{
			printf("%d, ", n);
		}
	}
	else
	{
		while (n >= 98)
		{
			printf("%d, ", n);
		}
	}
}
