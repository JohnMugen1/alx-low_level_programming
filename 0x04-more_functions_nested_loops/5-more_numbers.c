#include "main.h"
/**
 * more_numbers - print 10times numbers from 0 to 14
 * Return: 10times numbers from 0 to 14
 */
void more_numbers(void)
{
	/* local variable declaration */
	int i, j;

	/* nested for loop */
	for (i = 1; i <= 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			_putchar(j + '0');
		}
		_putchar('\n');
	}
	_putchar('\n');
}
