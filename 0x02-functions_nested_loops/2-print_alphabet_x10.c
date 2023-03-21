#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabet,in lowercase
 * followed by new line
 */
void print_alphabet_x10(void)
{
	/* local variable initialization */
	int i = 0;

	/* use nested while loop */
	while (i <= 10)
	{
		/* local variable initialization */
		char ch = 'a';

		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		_putchar('\n');
		i++;
	}
}
