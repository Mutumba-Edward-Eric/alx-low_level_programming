#include <stdio.h>
#include "main.h"

/**
 * main - main Entry point
 * Return: always 0 (Success)
 * Description: print the word "printchar"
 */
int main(void)
{
	int i;
	char p[] = "_putchar";

	for (i = 0; i < 9; i++)
	{
		_putchar(p[i]);
	}
	putchar('\n');
	return (0);
}
