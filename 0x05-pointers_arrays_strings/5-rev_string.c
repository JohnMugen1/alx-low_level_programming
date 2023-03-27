#include "main.h"
/**
 * rev_string - Reverses a string
 * @s: - string pointer parameter
 */
void rev_string(char *s)
{
	int i, length;
	char tmp;

	length = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	for (i = 0; i < length / 2; i++)
	{
		tmp = s[i];
		s[i] = s[length - i - 1];
		s[length - i - 1] = tmp;
	}
	_putchar('\n');
}
