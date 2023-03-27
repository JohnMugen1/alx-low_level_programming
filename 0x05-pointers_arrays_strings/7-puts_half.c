#include "main.h"
/**
 * puts_half - Prints a half of the string
 * if odd, n = (length_of_the_string - 1)/2
 * @str: parameter input
 */
void puts_half(char *str)
{
	int i, n, length;

	for (i = 0; str[i] != '\n'; i++)
	{
		length++;
	}
	n = (length / 2);
	if ((length % 2) == 1)
	{
		n = ((length + 1) / 2);
	}

	for (i = n; str[i] != '\0'; i++)
	{
	_putchar(str[i]);
	_putchar('\n');
	}
}
