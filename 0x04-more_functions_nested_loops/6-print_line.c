#include "main.h"
/**
 * print_line - Draw a straight line in the terminal
 * @n: n is the number of times to be printed
 * Return: new line if n is greater than 0, otherwise a new line
 */
void print_line(int n)
{
	/* checking if number in is less than 0 or not */
	if (n < 0)
	{
		_putchar(' ');
		return;
	}
	/* local variable declaration */
	int i, j;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
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
	}
	_putchar('\n');
}
