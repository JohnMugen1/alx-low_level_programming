#include "main.h"
/**
 * _strncat - Concatenates two strings
 * @dest: Pointer to the destination string
 * @src: Pointer to the source string
 * @n:Number of bytes to be used from the source string
 *
 * Return: Pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_length = 0, j;

	/* get length of the dest string */
	while (dest[dest_length] != '\0')
	{
		dest_length++;
	}
	/* Concatenate up to n character of src */
	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[dest_length + j] = src[j];
	}
	dest[dest_length + j] = '\0';
	return (dest);
}
