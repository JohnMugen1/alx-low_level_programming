#include "main.h"
#include <string.h>
/**
 * print_rev - Print a string, in reverse,followed by new line
 * @s : the string parameter
 */
void print_rev(char *s)
{
	int length, i;

	length = strlen(s);

	for (i = length - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
