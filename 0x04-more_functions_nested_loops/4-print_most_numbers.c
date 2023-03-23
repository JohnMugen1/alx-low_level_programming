#include "main.h"
/**
 * print_most_numbers - print the numbers,from 0 to 9,except 2 and 4
 *
 * Return: numbers from 0 to 9 except 2 and 4
 */
void print_most_numbers(void)
{
	/* local variable declaration */
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (i == 2 || i == 4)
		{
			continue;
		}
		_putchar(i + '0');
	}
	_putchar('\n');
}
