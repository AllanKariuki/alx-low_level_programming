#include "main.h"

/**
 * _memcpy - copies n bytes of memory from src to dest
 * @src: source pointer
 * @dest: destination pointer
 * @n: unsigned integer
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return(dest);
}
