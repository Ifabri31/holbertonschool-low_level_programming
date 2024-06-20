#include "main.h"
/**
 * rev_string - reverses a string
 * @s: string to be reverse
 */

void rev_string(char *s)
{
	int larg = 0;
	char cambio;
	int indice;

	while (s[larg] != '\0')
	{
		larg++;
	}
	for (indice = 0; indice < larg / 2; indice++)
	{
		cambio = s[indice];
		s[indice] = s[larg - indice - 1];
		s[larg - indice - 1] = cambio;
	}
}
