#include "main.h"

/**
 * _abs - return absolute value
 * @n: the integer being checked
 * Return: absolute n
 */

int _abs(int n)
{
	int abs;

	if (n < 0)
	{
		abs = n * -1;
	}
	else
	{
		abs = n;
	}

	return (abs);
}
