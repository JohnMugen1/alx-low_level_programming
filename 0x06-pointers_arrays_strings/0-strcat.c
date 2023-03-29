#include "main.h"
/**
 * _strcat - Function that concatenates two strings
 * @dest:The string  where to concatenate
 * @src:The string to be concatenated
 * Return: return a pointer
 */
char *_strcat(char *dest, char *src)
{
	int i, j;
	/* find the end of the destination string */
	i = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	/* concatenates the source string to the destination string */
	j = 0;

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
