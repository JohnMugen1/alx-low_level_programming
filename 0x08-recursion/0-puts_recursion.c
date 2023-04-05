#include "main.h"
/**
 * _puts_recursion - Print a string
 * @s: String to be printed
 *
 * Return: Always 0 (Success)
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}

