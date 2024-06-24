#include "main.h"
/**
 * _strncat - concatenate two strings
 * @dest: string destino
 * @src: string fuente
 * @n: number of bytes
 *
 * Return: pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int len = 0;
	int i;

	while (dest[len] != '\0')
	{
		len++;
	}
	for (i = 0; i < n; i++)
	{
		if (src[i] == '\0')
			break;
		dest[len + i] = src[i];
	}
	dest[len + i] = '\0';

	return (dest);
}
