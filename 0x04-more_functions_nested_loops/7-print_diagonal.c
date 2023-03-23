#include "main.h"
/**
 * print_diagonal - print a diagonal line in the terminal
 * @n: is the number of times to print the given symbol
 * Return: joined symbols that form a diagonal line
 */
void print_diagonal(int n)
{
	/* loval variable declaration */
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				if (i == j)
				{
					_putchar('\\');
				}
				else
				{
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
