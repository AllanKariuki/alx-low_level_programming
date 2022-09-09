#include <stdio.h>
/**
 * main - prints size of types
 * description: printts sizes of several data types in bytes
 * Return: 0
 */

int main(void)
{
	char c;
	int n;
	long int l;
	long long i;
	float f;

	printf("Size of a char: %d byte(s)\n", sizeof(c));
	printf("Size of an int: %d byte(s)\n", sizeof(n));
	printf("Size of a long int: %d byte(s)\n", sizeof(l));
	printf("Size of a long long int: %d byte(s)\n", sizeof(i));
	printf("Size of a float: %d byte(s)\n", sizeof(f));


	return (0);
}
