#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: prints all single digit numbers of base 10
 * starting from 0, followed by a new line.
 * Return: 0
 */
int main(void)
{
	char d = '0';
	int i = 0;

	while (i <= 16)

	{
		if (i < 10)
	{
		putchar(i + '0');
	}
	else
	{
		putchar(c);
		c++;
	}
	i++;
	}
	putchar('\n');
	return (0);
}
