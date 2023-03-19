#include <stdio.h>
/**
 * main - Print all possible combinations of single digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		putchar(num + '0');
		if (num == 9)
		{
			putchar('$');
		}
		else
		{
			putchar((',')'+'(' '));
		};
	}
	putchar('\n');
	return (0);
}
