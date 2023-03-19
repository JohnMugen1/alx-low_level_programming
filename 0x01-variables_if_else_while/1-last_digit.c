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
	int n, lastDigit;


	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* get the number last digit */
	lastDigit = n % 10;
	/* Checking the number conditions */
	printf("Last digit of %d is ", n);
	if (lastDigit > 5)
	{
		printf("%d and is greater than 5", lastDigit);
	}
	else if (lastDigit == 0)
	{
		printf("%d and is 0", lastDigit);
	}
	else
	{
		printf("%d and is less than 6 and not 0", lastDigit);
	}
	printf("\n");
	return (0);
}
