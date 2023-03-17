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
	int n, digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* get the last digit of the random number */
	digit = n % 10;
	/* if the number is greater than 5 */
	if (digit > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, digit);
	}
	else if (digit < 6 && digit != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, digit);
	}
	else
	{
		printf("Last digit of %d is %d  and is 0\n", n, digit);
	}
	return (0);
}
