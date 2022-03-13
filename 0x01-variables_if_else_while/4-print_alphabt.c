#include <stdio.h>
/**
 * main - main block
 * Description: Get a random number
 * Return: 0
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != 'e' && c != 'q')
		putchar(c);
	}
	putchar('\n');
	return (0);
}
