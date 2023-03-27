#include "main.h"
/**
 * swap_int - Swap the value of two integers
 * @a: the first number parameter
 * @b: the second number parameter
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = (*a);
	(*a) = (*b);
	(*b) = temp;
}
