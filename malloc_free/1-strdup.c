#include "main.h"
#include <stdlib.h>
/**
 * _strdup - return pointer to a new string
 * @str: string
 *
 * Return: null if is null
 */

char *_strdup(char *str)
{
	char *c;
	unsigned int lon, i;

	if (str == NULL)
		return (NULL);
	for (lon = 0; str[lon] != '\0'; lon++)
		;

	c = malloc((lon + 1) * sizeof(char));
	if (c == NULL)
		return (NULL);

	for (i = 0; i < lon; i++)
		c[i] = str[i];
	c[lon] = '\0';
	return (c);
}
