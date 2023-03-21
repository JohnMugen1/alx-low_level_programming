#include "main.h"
/**
 * _islower - Check for lowercase character
 * @c: is the character that will be checked
 * Return: 1 if char is lowercase else 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
