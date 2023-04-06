#include "main.h"
/**
 * calculate_sqrt - Getthe square root
 *@n: The square number
 *@k: number input
 *
 * Return: if sqrt,k,if > n,return -
 */
int calculate_sqrt(int n, int k)
{
	if (k * k == n)
	{
		return (k);
	}
	else if (k * k > n)
	{
		return (-1);
	}
	else
	{
		return (calculate_sqrt(n, k + 1));
	}
}
/**
 * _sqrt_recursion - Ensure n is not negative or 0
 * @n: the number to check
 *
 * Return: if negative,return -1,if 0,return 0,otherwise return sqrt value
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (0);
	}
	else
	{
		return (calculate_sqrt(n, 1));
	}
}
