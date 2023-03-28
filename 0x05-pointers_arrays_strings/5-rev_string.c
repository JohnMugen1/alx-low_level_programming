#include "main.h"
/**
 * rev_string - Reverses a string
 * @s: - string pointer parameter
 */
void rev_string(char *s)
{
	int i, length = 0;
	char rev = s[0];

	while (s[length] != '\0')
	{
		length++;
	}

	for (i = 0; i < length; i++)
	{
		length--;
		rev = s[i];
		s[i] = s[length];
		s[length] = rev;
	}
	_putchar('\n');
}
