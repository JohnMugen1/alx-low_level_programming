#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/*
	 * Checking the value n using if..else..statement
	 * If value n is greater than zero,then it is positive
	 */
	if (n > 0)
	{
		printf("%d is a positive number", n);
	}
	/* When value n is less than 0,then it is negative number */
	else if (n < 0)
	{
		printf("%d is a negative number.", n);
	}
	/* Otherwise the value n is zero */
	else
	{
		printf("The value is zero.");
	}
	return (0);
}
