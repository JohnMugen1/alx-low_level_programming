#include "main.h"
/**
 * print_diagonal - print a diagonal line in the terminal
 * @n: is the number of times to print the given symbol
 * Return: joined symbols that form a diagonal line
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i, j;

		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				if (j == i)
				{
					_putchar('\\');
				}
				else if (j < 1)
				{
					_putchar(' ');
				}
				_putchar('\n');
			}
		}
	}
}
