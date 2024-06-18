#include <stdio.h>
/**
 * main - si el numero es positivo, negativo o zero
 *
 * Return: Always (success)
 */

int main(void)
{
	int n = 42;
	
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
