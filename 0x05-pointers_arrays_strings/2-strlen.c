#include "main.h"

/**
 * _strlen - returns the length of the string
 * @s: pointer to int s
 * Return: 0
 */

int _strlen(char *s)
{
	int ln;

	while (*s)
	{
		ln += 1;
		s += 1;
	}

	return (ln);
}
