#include "lists.h"
#include <stdio.h>
/**
 * print_list - imprime la lista
 * @h: puntero a la lista
 *
 * Return: numero de elementos
 */

size_t print_list(const list_t *h)
{
	size_t a = 0;

	while (h != NULL)
	{
		a++;
		if (h->str == 0)
		{
			printf("[0] (nil)\n");
			h = h->next;
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
			h = h->next;
		}
	}
	return (a);
}
