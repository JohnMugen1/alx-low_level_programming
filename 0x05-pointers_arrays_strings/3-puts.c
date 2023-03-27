#include "main.h"
/**
 * _puts - Print a string,followed by new line
 * @str:String to be printed
 */
void _puts(char *s)
{
	while ((*s) != '\n')
	{
		char c = (*s);

		_putchar('c');
		s++;
	}
	_putchar('\n');
}
