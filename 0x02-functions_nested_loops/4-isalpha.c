#include "main.h"

/**
 * _isalpha: return 1 if alphabet and 0 otherwise
 * @c: the integer being checked
 * Return: 1 if true and 0 otherwise
 */

int _isalpha(int c)
{
	int ch, chlower;
	int val;

	for (ch = 65; ch < 97; ch ++)
	{
		chlower = ch + 32;

		if (c == ch || c == chlower)
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
