#include "main.h"
/**
 * print_square - print square, followed by a line
 * @size: is the number of times to print the symbols
 * Return: a new line if n is less than 0,otherwise a square of hash symbol
 */
void print_square(int size)
{
	/* local variable declaration */
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
		_putchar('\n');
	}
}
