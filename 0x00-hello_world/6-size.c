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
	printf("Size of char: ", sizeof(c));
	printf("Size of an int: ", sizeof(n))
	printf("Size of long int: ", sizeof(l));
	printf("Size of long long int: ", sizeof(i));
	printf("Size of a float: ", sizeof(f));
	return (0);
}
