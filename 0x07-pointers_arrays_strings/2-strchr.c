#include "main.h"

/**
 * _strchr - returns a pointer to the first character c
 * @s: pointer to a string
 * @c: a character c
 * Return: NULL if the character is not found
 */

char *_strchr(char *s, char c)
{

	while(*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}

	if (c == '\0')
		return (s)

	return (NULL)
}
