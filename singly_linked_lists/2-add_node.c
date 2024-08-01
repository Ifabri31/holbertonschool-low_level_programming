#include "lists.h"
/**
 * add_node - agrega nuevo nodo al principio
 * @head: doble ptr al head de la lista
 * @str: cadena nuevo nodo
 *
 * Return: new_node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	char *str2;
	int len;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	str2 = strdup(str);
	if (str2 == NULL)
	{
		free(new_node);
		return (NULL);
	}
	for (len = 0; str[len]; len++)

	new_node->str = str2;
	new_node->len = len;
	new_node->next = *head;

	*head = new_node;
	return (new_node);
}
