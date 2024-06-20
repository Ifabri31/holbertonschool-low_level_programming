#include "main.h"
/**
 * _strlen - return the length of a string
 * @s: puntero a un char
 *
 * Return: the length of a string
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		s++;
		len++;
	}

	return (len);
}
