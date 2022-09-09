#include <stdio.h>
/**
 * main - prints sizes of types
 * description: printts sizes of several data types
 * return: 0
 */
int main(void)
{
	char c;
	int n;
	long int l;
	long long i;
	float f;
	printf("Size of char: %d byte(s)\n", sizeof(c));
	printf("Size of an int: %d byte(s)\n", sizeof(n));
	printf("Size of long int: %d byte(s)\n", sizeof(l));
	printf("Size of long long int: %d byte(s)\n", sizeof(i));
	printf("Size of a float: %d byte(s)\n", sizeof(f));
	return (0);
}