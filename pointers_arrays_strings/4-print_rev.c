#include "main.h"
/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s: string to be printed
 */

void print_rev(char *s)
{
	int larg = 0;
	int b;

	while (s[larg] != '\0')
	{
		larg++;
	}
	for (b = larg - 1; b >= 0;  b--)
	{
		_putchar(s[b]);
	}

	_putchar('\n');
}
