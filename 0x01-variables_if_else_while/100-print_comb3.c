#include <stdio.h>
/**
 * main - main block
 * Description: Print combinations of two digit numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	int tens;
	int ones;

	for (tems = 0; tens <= 9; tens++)
	{
		for (ones = tens + 1; ones <= 9; ones++)
		{
			putchar(tens + '0');
			putchar(ones + '0');

			if (tens < 8)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
