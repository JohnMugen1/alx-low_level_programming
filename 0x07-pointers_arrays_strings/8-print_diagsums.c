#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Entry point
 * @a: input value
 * @size:input
 * Return: Always 0 (Success)
 */
void print_diagsums(int *a, int size)
{
	int total, total1, i;

	total = 0;
	total1 = 0;

	for (i = 0; i < size; i++)
	{
		total = total + a[i * size + i];
	}
	for (i = size - 1; i >= 0; i--)
	{
		total1 = a[i * size + (size - i - 1)];
	}
	printf("%d,%d\n", total, total1);
}
