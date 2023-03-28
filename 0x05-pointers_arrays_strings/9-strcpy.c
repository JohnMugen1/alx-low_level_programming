#include "main.h"
/**
 * _strcpy - Copying string pointed by the pointer
 * @dest: this is whre to copy the string
 * @src: this points the string to be copied
 * Return: return a copied string
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (*(src + i) != '\0')
	{
		i++;
	}

	for (; j < i; j++)
	{
		dest[j] = src[j];
		src++;
	}
	dest[i] = '\0';
	return (dest);
}
