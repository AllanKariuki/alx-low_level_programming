#include "main.h"

/**
 * _islower - prints if true or false
 * @c: the integer to check
 * Return: 0
 */

int _islower(int c)
{
	int ch;
	int val;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (c == ch)
		{
			val = 1;
			break;
		}
		else
		{
			val = 0;
		}
	}

	return (val);
}
