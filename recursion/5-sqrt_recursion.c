#include "main.h"
/**
 * math_sqrt  - funcion
 * @n: un int
 * @i: otro int
 *
 * Return: result
 */

int math_sqrt(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (math_sqrt(n, i + 1));
}

/**
 * _sqrt_recursion - square root of a number
 * @n: number
 *
 * Return: square
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (math_sqrt(n, 0));
}
