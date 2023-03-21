#include "main.h"

/* function prototype */
void print_alphabet_x10(void);

/**
 * main -Print all alphabets 10 times in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	/* function invokation */
	print_alphabet_x10();
	return (0);
}
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
