#include <stdio.h>
/**
 * main - Display all single numbers of base 10
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num = 0;

	for (num = 0; num <= 9; num++)
	{
		putchar(num + '0');
	}
	putchar('\n');
	return (0);
}
