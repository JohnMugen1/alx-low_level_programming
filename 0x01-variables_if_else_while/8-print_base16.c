#include <stdio.h>
/**
 * main - Print all numbers of base 16
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char num = '0';
	char letter = 'a';

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
	}
	for (letter = 'a'; letter <= 'f'; letter++)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
