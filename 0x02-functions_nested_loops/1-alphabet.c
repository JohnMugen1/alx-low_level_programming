#include "main.h"
/* function prototype */
void print_alphabet(void);
/**
 * main - Calls function that prints the alphabet
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	/* function call */
	print_alphabet();
	return (0);
}
/**
 * print_alphabet - print all alphabet in lowercase
 */
void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
