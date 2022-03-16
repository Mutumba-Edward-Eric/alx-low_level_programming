#include "main.h"

/**
 * main - main Entry point
 * Return: always 0 (Success)
 * Description: print the word "printchar"
 */

int main(void)
{
	char c[9] = "_putchar";
	int i = 0;
	while (i < 8)
	{
		_putchar(c[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
