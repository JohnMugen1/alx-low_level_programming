#include<stdio.h>
/**
 * main - A program that prints the size of various computer types
 * Return: 0 (success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

	printf("Size of a char a :%d byte(s)\n", sizeof(a));
	printf("Size of int b :%d byte(s)\n", sizeof(b));
	printf("Size of long int c :%d byte(s)\n", sizeof(c));
	printf("Size of long long int d:%d byte(s)\n", sizeof(d));
	printf("Size of float f:%d\n", sizeof(f));
	return (0);
}
