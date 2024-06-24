#include "main.h"
/**
 * _strncpy - copies strings
 * @dest: string destino
 * @src: string fuente
 * @n: number of character
 *
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (src[i] == '\0')
		{
			break;
		}
		dest[i] = src[i];
	}
	while (i < n)
	{
		dest[i++] = '\0';
	}

	return (dest);
}
