#include <stdlib.h>

#include <time.h>

#include <stdio.h>
/* more headers goes there */



/* betty style doc for function main goes there */
/**
 * main - prints a string
 * Description: prints is negative if the number is negative,
 * is zero if it is zero and positive otherwise
 * Return: 0
 */

int main(void)

{

		int n;



		srand(time(0));

		n = rand() - RAND_MAX / 2;

		/* your code goes there */
		if (n>0)
			printf("%i is positive\n", n);
		else 
			if (n==0)
				printf("%i is zero\n", n);
			else 
				printf("%d is negative\n", n);

		return (0);

}
