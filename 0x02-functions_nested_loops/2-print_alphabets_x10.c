#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet ten times
 * Return: 0
 */

void print_alphabet_x10(void)
{
	int ch;
	int i;

	while (i < 10)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
	}
}
