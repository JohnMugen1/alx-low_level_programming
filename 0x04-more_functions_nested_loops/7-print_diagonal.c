#include "main.h"
/**
 * print_diagonal - print diagonal line on the terminal
 * @n: the number of times to print the bent line symbol
 * Return: joined bent line forming diagonal line
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		/* local variable declaration */
		int i, j;

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
					_putchar('\n');
				}
			}
			_putchar('\n');
		}
	}
}
