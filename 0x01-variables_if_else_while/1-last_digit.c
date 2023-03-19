#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Determine last digit conditi
 * on
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* get the number last digit */
	int lastDigit = n % 10;
	/* displaying out the number results */
	printf("Last digit of %d is %d ", n, lastDigit);
	if (lastDigit < 6 && lastDigit != 0)
	{
		printf("and is less than 6 and not 0");
	}
	else if (lastDigit > 5)
	{
		printf("and is greater than 5");
	}
	else
	{
		printf("and is 0");
	}
	printf("\n");
	return (0);
}
