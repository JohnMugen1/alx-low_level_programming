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

	/* output the random number */
	printf("%d ", n);
	/* if number n is greater than zero */
	if (n > 0)
	{
		printf("is positive");
	}
	/* if number is 0 */
	if (n == 0)
	{
		printf("is zero");
	}
	/* if number is less than 0 */
	if (n < 0)
	{
		printf("is negative");
	}

	return (0);
}
