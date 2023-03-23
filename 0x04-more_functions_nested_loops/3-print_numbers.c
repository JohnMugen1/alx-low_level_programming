#include "main.h"
/**
 * print_numbers - print numbers,from 0 to 9
 *
 * Return: numbers from 0 to 9
 */
void print_numbers(void)
{
	/* local variable declaration */
	int i;

	for (i = 0; i <= 9; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}
