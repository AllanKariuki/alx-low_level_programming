#include <stdio.h>

/**
 * main - prints reversed alphabets
 * description: p[rints lowercase alphabets in reverse order
 * Return: 0
 */

int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
