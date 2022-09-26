#include "main.h"

/**
 * _strchr - locates the character c
 * @s: pointer to a string
 * @c: a character c
 * Return: pointer to the character c
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
