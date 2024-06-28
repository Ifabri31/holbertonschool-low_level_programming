#include "main.h"
/**
 * math_is_prime - determine if is prime
 * @n: number
 * @i: divisor
 *
 * Return: 1 if n prime, or 0
 */
int math_is_prime(int n, int i)
{
	if (n <= 1)
		return (0);
	if (i * i > n)
		return (1);
	if (n % i == 0)
		return (0);
	return (math_is_prime(n, i + 1));
}
/**
 * is_prime_number - check prime number
 * @n: number
 *
 * Return: 1 if n prime, or 0
 */

int is_prime_number(int n)
{
	return (math_is_prime(n, 2));
}
