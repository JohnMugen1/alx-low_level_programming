#include "main.h"
/**
 * print_line - Draws a straight line in the terminal
 * Return: A joined dashes forming a line
 */
void print_line(int n)
{
	/* local variable declaration */
	int i;

	for (i = 0; i <= n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
