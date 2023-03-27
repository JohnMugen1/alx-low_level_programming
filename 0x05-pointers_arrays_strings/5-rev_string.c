#include "main.h"
#include <string.h>
/**
 * rev_string - Reverses a string
 * @s: - string pointer parameter
 */
void rev_string(char *s)
{
	int i, length;

	length = strlen(s);

	for (i = length; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
