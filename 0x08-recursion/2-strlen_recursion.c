#include "main.h"
/**
 * _strlen_recursion - Print string length using recursion
 * @s: String input
 *
 * Return: return an integer length
 */
int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s)
	{
		length++;
		length += _strlen_recursion(s + 1);
	}
	return (length);
}

