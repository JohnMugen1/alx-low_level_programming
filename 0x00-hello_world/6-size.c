#include<stdio.h>
/**
 * main - A program that prints the size of various computer types
 * Return: 0 (success)
 */
int main(void)
{
	printf("Size of a char :%lu byte(s)\n", sizeof(char));
	printf("Size of int  :%lu byte(s)\n", sizeof(int));
	printf("Size of long int:%lu byte(s)\n", sizeof(long int));
	printf("Size of long long float d:%lu byte(s)\n", sizeof(float));
	printf("Size of long long int:%lu byte(s)\n", sizeof(long long int));
	return (0);
}
