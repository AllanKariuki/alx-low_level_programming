#include "main.h"

/**
 * print_rev - prints a reversed string
 * @s: string being reversed
 * Return: void
 */

int _strlen(char *s)
{
	char *p = s;

	while (*s)
	{
		s++;
	}
	return (s - p);
}

void print_rev(char *s)
{
	int size = _strlen(s);

	while (size--)
	{
		_putchar(*(s + size));
	}

	_putchar('\n');
}
