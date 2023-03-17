#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/*
 * The code for the function main goes here
 * Return: 0 (success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;


	/* if number n is greater than zero */
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	/* if number is 0 */
	if (n == 0)
	{
		printf("%d is  zero\n", n);
	}
	/* if number is less than 0 */
	if (n < 0)
	{
		printf("%d is negative\n", n);
	}

	return (0);
}
