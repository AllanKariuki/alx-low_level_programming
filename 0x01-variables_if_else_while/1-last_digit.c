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

		srand(time(0));
		n = rand() - RAND_MAX / 2;
	
		if (n > 5)
			printf("Last digit of %d is %d and is greater than 5\n", n);
		else if (n == 0)
			printf("Last digit of %d is %d and is 0\n", n);
		else if (n < 6 && n != 0)
			printf("Last digit of %d is %d and is less than 6 and not 0");
		return (0);
}
