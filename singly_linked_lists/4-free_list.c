#include "lists.h"
/**
 */

void free_list(list_t *head)
{
	list_t *n;

	for (n = head; n != NULL; n = n->next)
	{
		free(n->str);
		free(n);
	}
}
