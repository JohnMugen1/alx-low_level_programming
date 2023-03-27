#include "main.h"
/**
 * _puts - Print a string,followed by new line
 * @str:String to be printed
 */
void _puts(char *str)
{
	while ((*str))
	{
		_putchar((*str));
		str++;
	}
	_putchar('\n');
}
