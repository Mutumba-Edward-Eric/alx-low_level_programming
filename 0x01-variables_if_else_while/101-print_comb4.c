#include <stdio.h>
/**
 * main - main block
 * Description: prints all single digit numbers of base 10
 * starting from 0, followed by a new line.
 * Return: 0
 */ 
int main(void)
{
	int a, b, c;
	for (int i = 0; i <= 9; i++)

	{
		for (int j = i + 1; j <= 9; j++)
		{
			for (int k = j + 1; k <= 9; k++)
			{
				putchar(i + '0');
				putchar(j + '0');
				putchar(k + '0');
				if (((i * 100) + (j * 10) + k) < 789)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return 0;
}
