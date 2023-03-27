#include "main.h"
/**
 * _strlen - Returns the length of s string
 * @s: String whose length is to be determined
 * Return: length of the string
 */
int _strlen(char *s)
{
	int length = 0;

	while ((*s) != '\n')
	{
		length++;
		s++;
	}
	return (length);
}
