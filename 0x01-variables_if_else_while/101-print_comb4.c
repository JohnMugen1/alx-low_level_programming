#include <stdio.h>
/**
 * main - Print possible 3-digits combinations
 *
 * Return: Always (Success)
 */
int main(void)
{
	/* declare variables */
	int i, j, k;

	/* use nested for loop */
	for (i = 0; i <= 9; i++)
	{
		for (j = i; j <= 9; j++)
		{
			for (k = i; k <= 9; k++)
			{
				if ((i != j) && (i != k) && (j != k) && (i < j) && (i < k) && (j < k))
				{
					putchar(i + '0');
					putchar(j + '0');
					putchar(k + '0');
					if (i != 7 || j != 8 || k != 9)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
