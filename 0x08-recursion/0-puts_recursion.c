#include "main.h"
/**
 * _puts_recursiion - Print a string
 * @s: String to be printed
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
		return;
	}
	*s = '\0';
}

