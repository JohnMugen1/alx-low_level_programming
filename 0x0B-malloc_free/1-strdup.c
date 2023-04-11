#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - duplicate to new mem location
 * @str: character
 *
 * Return: 0
 */
char *_strdup(char *str)
{
	char *k;
	int i = 0, r;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[i] != '\0')
	{
		i++;
		k = malloc(sizeof(char) * (i + 1));
	}
	if (k == NULL)
	{
		return (NULL);
	}
	for (r = 0; str[r]; r++)
	{
		k[r] = str[r];
	}
	return (k);
}
