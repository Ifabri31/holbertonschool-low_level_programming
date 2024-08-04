#include "lists.h"
/**
 * print_dlistint - Print elements of a list
 * @h: pointer a head
 *
 * Return: The number of a nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodes++;
	}
	return (nodes);
}
