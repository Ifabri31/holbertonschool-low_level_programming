#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array
 * @nmemb: number elements in array
 * @size: size of each element
 *
 * Return: ptr
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *pointer;
	unsigned int i;
	char *t;

	if (nmemb == 0 || size == 0)
		return (NULL);

	pointer = malloc(nmemb * size);
	if (pointer == NULL)
		return (NULL);

	t = pointer;
	for (i = 0; i < nmemb * size; i++)
		t[i] = 0;
	return (pointer);
}
