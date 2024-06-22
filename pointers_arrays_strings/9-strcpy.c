#include "main.h"
/**
 * *_strcpy - copia una cadena en otra
 * @dest: cadena primera
 * @src: cadena segunda
 *
 * Return: pointer dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
