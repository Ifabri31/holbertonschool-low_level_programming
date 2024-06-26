#include "main.h"
/**
 * _print_rev_recursion - print a string in reverse
 * @s: string
 */

void _print_rev_recursion(char *s)
{
	_putchar(*s);
	s--;
	_print_rev_recursion(s - 1);
	if (*s == 0)
	{
		return;
	}
}
