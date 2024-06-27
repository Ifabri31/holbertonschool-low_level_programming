#include "main.h"
/**
 * _sqrt_recursion - square root of a number
 * @n: number
 *
 * Return: square
 */

int _sqrt_recursion(int n)
{
	int i = n / 2;

	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	if (i * i == n)
		return (i);
	if (i * i > n)
		return (_sqrt_recursion(i));
	return (_sqrt_recursion(n - (i * i - n)));
}
