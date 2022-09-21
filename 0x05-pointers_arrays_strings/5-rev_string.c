#include "main.h"

/**
 * _strlen - return the length
 * @s: string s
 * Return: length of string
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s)
	{
		s++;
		len++;
	}

	return (len);
}
/**
 * rev_string - reverses string
 * @s: string
 * Return: void
 */

void rev_string(char *s)
{
	int ln1 = _strlen(s);
	int counter = 0;
	char temp;

	while (counter < ln1 / 2)
	{
		temp = *(s + counter);
		*(s + counter) = *(s + ln1 - 1 - counter);
		*(s + ln1 - 1 - counter) = temp;
		counter++;
	}
}
