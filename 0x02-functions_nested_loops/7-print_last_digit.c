#include "main.h"

/**
 * print_last_digit - Prints the last digit of a given number
 * @n: is the number to be checked
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
	int num;

	if (n < 0)
	{
		n *= -1;
	}

	num = n % 10;

	if (num < 0)
	{
		num *= -1;
	}

	_putchar(num + '0');
	return (num);
}
