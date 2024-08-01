#include "lists.h"
#include <string.h>
/**
 * add_node - agrega nuevo nodo al principio
 * @head: doble ptr al head de la lista
 * @str: cadena nuevo nodo
 *
 * Return: new_node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t new_node;

	new_node.str = strdup(str);
	
	if (new_node.str == NULL)
	       return (NULL);

	new_node.next = *head;
	*head = &new_node;
	return (&new_node);
}
