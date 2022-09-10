#include <stdio.h>
/**
 * main - prints lowercase letters of the alphabet
 * Description: Prints letter of the alphabet, a to z in lowercase
 * Returns: 0
 */

int main(void)
{
	int ch;
	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
		putchar('\n');
		getc();
	}
	return (0);
}
