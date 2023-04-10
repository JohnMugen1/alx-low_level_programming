#include "main.h"
/**
 * _puts - print the string
 * @str : string input
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
	}
	str = '\0';
}
