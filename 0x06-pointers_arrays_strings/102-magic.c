#include <stdio.h>
/**
 * main - Print a[2] = 98,followed by new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a[] = {72, 56, 89, 34, 56, 23};
	int *p;

	p = &a[0];

	printf("a[2] = %d\n", *(p + 2));
	return (0);
}
