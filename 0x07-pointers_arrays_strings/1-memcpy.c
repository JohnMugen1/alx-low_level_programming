#include "main.h"
/**
 * _memcpy - Copy a memory area
 * @dest: where memory will be stored
 * @src: where memory is copied
 *@n: number of bytes
 *
 * Return: Copied memory with n bytes changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int k = 0;
	int i = n;

	for (; k < i; k++)
	{
		dest[k] = src[k];
		n--;
	}
	return (dest);
}
