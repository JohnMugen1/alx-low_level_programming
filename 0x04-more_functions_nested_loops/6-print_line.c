#include "main.h"
/**
 * print_line - Draw  straight line in the terminal
 * @n: the number of times to print the underscore
 * Return: joined underscores forming a straight line
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	/* local variable declaration */
		int i;

		/* for loop */
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
}
