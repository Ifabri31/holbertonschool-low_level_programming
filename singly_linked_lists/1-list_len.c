#include "lists.h"
/**
 */

size_t list_len(const list_t *h)
{
	size_t lon = 0;

	while (h != NULL)
	{
		lon++;
		h = h->next;
	}
	return (lon);
}
