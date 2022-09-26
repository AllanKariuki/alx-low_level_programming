#include "main.h"

/**
 * *_memset - fills pointer s with b for range n
 * @s: pointer
 * @b: value
 * @n: integer
 *Return: pointer s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for(i=0; i < n; i++)
	{
		s[i] = b;
	}

	return(s);
}
