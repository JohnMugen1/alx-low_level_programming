#include "main.h"
/**
 * _strcmp - Compare two strings
 * @s1: First string to compare
 * @s2: Second string to compare
 *
 * Return:negative integer if s1 is less than s2,
 *         0 if s1 and s2 are equal,
 *         positive integer if s1 is greater than s2
 *
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
