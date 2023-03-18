#include <stdio.h>
/**
 * main - print the alphabet in both upper and lowercases
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch = 'a';
	char letter = 'A';

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	for (letter = 'A'; letter <= 'Z'; letter++)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
