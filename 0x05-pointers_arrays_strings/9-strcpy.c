#include "main.h"
/**
 * _strcpy - Copying string pointed by the pointer
 * @dest: this is whre to copy the string
 * @src: this points the string to be copied
 * Return: return a copied string
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; i < 98; i++)
	{
		dest[i] = *src;
		src++;
	}
	return (dest);
}
