#include "main.h"
#include <stdio.h>
/**
 * print_array - prints elements of an array of integers
 * @a: array
 * @n: number of elements to be printed
 */

void print_array(int *a, int n)
{
	int i = 0;

	if (n <= 0)
	{
		printf("\n");
		return;
	}
	while (i < n)
	{
		printf("%d", a[i]);
		i++;

		if (i != n - 1)
			printf(", ");
	}
	printf("\n");
}
