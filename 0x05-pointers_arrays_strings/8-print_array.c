#include "main.h"
#include <stdio.h>
/**
 * print_array - Print n elements of an array of integers
 * @a: the first parameter,is a pointer
 * @n: the length ofthe array
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}

