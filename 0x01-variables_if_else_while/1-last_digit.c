#include <stdlib.h>

#include <time.h>

/**
 * main - prints a string
 * Description: cheks wther the last digit is greater than 5, 
 * is zero, less than 6 and not 0
 * Return: 0
 */

int main(void)

{

		int n;
		int last;

		srand(time(0));
		n = rand() - RAND_MAX / 2;
		
		last = n % 10;
		printf("Last digit of %d is %d and is", n, last);
		if (last > 5)
			printf(" is greater than 5\n", last);
		else if (last == 0)
			printf(" 0\n", last);
		else
			printf(" less than 6 and not 0", last);
		return (0);
}
