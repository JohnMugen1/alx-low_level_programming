#include "main.h"
/**
 * _pow_recursion - Function that returns value of x raised to y
 * @x: The number input
 * @y: The number of times to raise x
 *
 * Return: if 0,return 1,if <0 return -1,otherwise return raised value
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x *= _pow_recursion(x, y - 1));
	}
}
