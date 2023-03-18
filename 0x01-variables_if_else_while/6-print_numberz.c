#include <stdio.h>
/**
 * main - Print single numbers of base 10
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num = 0;

	if (num < 10)
	{
		putchar(num + '0');
		num++;
	}
	putchar('\n');
	return (0);
}
