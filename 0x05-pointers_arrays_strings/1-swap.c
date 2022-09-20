#include "main.h"

/**
 * swap_int: swaps the values of these two integers
 * @a: pointer to a
 * @b: pointer to b
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int c;
	c = *a;
	*a = *b;
	*b = c;
}
