#include <stdlib.h>
#include "main.h"

/**
 * _strbrk - locates the first occurence of character of accept in s
 * @s: pointer to a string
 * accept: pointer to a string
 * Return: pointer to the match of s
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}
