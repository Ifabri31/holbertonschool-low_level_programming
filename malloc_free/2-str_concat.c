#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenar strings
 * @s1: string1
 * @s2: string2
 *
 * Return: strings concatenado
 */

char *str_concat(char *s1, char *s2)
{
	char *s3;
	unsigned int i, i2;
	int long1 = 0, long2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[long1] != '\0')
		long1++;
	while (s2[long2] != '\0')
		long2++;

	s3 = malloc((long1 + long2 + 1) * sizeof(char));
	if (s3 == NULL)
		return (NULL);

	for (i = 0; i != '\0'; i++)
	{
		s3[i] = s1[i];
	}

	for (i2 = 0; s2[i2] != '\0'; i2++, i++)
	{
		s3[i] = s2[i2];
	}
	s3[i] = '\0';

	return (s3);
}
