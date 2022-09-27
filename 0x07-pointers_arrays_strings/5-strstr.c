#include <stdlib.h>
#include "main.h"

/**
 * _strstr - returns the first occurence of needle in haystack
 * @neddle: pointer to a string
 * @haystack: pointer to the string being searched through
 * Return: pointer to the beggining
 */

char *_strstr(char *haystack, char *needle)
{
	int j;
	int i = 0;

	while(needle[i] != '\0')
		i++;
	while(*haystack)
	{
		for (j = 0; needle[j]; j++)
		{
			if (haystack[j] != needle[j])
			{
				break;
			}
		}
		if (j != i)
			haystack++;
		else
			return (haystack);
	}

	return (NULL);
}
