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


	/* if number n is greater than zero */
	if (n > 0)
	{
		printf("%.2d is positive\n", n);
	}
	/* if number is 0 */
	if (n == 0)
	{
		printf("%.2d is zero\n", n);
	}
	/* if number is less than 0 */
	if (n < 0)
	{
		printf("%d is negative\n", n);
	}

	return (0);
}
