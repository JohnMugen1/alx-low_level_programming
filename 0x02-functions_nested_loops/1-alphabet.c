#include "main.h"
/**
 * print_alphabet - print all alphabet in lowercase
 */
void print_alphabet(void)
{
	/* local variable declaration */
	char ch;
	/* using for loop */
	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
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
