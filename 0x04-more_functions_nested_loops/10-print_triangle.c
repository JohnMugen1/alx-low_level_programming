#include "main.h"
/**
 * print_triangle - prints a triangle follwed by a new line
 * @size: the number of times to print the symbol
 * Return: a triangle image formed by hash symbols
 */
void print_triangle(int size)
{
	/* local variable declaration */
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	for (i = 0; i < size; i++)
	{
		for (j = size; j > 0; j--)
		{
			if (j <= i)
			{
				_putchar('#');
			}
			else
			{
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
