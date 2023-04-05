#include "main.h"
/**
 * factorial - Function that returns factorial of a given number
 * @n: given number
 *
 * Return: returns an integer number
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n *= factorial(n - 1));
	}
}
