#include "main.h"

/**
 * main- prints a string
 * description: prints a string _putchar
 * Return: 0
 */

int main(void)
{
	char *my = "_putchar";
	
	while (*my)
	{
		_putchar(*my);
		my++;
	}
	_putchar('\n');

	return (0);
}
