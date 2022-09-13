#include "main.h"

/**
 * main - prints alphabets
 * Return: 0
 */

void print_alphabet()
{
	char ch;
	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}

int main(void)
{
	print_alphabet();
	return (0);
}
