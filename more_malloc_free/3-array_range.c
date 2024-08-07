#include "main.h"
#include <stdlib.h>
/**
 * array_range - Creates an array of integers.
 * @min: min  value.
 * @max: max value.
 *
 * Return: ptr
 */

int *array_range(int min, int max)
{
	int *a;
	int i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	a = malloc(sizeof(int) * size);
	if (a == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		a[i] = min++;
	return (a);
}
