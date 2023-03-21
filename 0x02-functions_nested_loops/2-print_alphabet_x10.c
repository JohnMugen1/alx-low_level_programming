#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabet,in lowercase
 * followed by new line
 */
void print_alphabet_x10(void)
{
	/* local variable initialization */
	int i;
	char ch;

	i = 0;

	/* use nested while loop */
	while (i <= 10)
	{
		ch = 'a';

		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		_putchar('\n');
		i++;
	}
}
