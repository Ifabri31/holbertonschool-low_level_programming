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
	unsigned int i, ii, longs2, longs1;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = '\0';

	for (longs2 = 0; s2[longs2] != '\0'; longs2++)
	for (longs1 = 0; s1[longs1] != '\0'; longs1++)

	s3 = malloc((longs1 + longs2 + 1) * sizeof(char));
	if (s3 == NULL)
		return (NULL);

	for (i = 0; i < longs1; i++)
		s3[i] = s1[i];

	for (ii = 0; ii < longs2; ii++, i++)
		s3[i] = s2[ii];
	s3[i] = '\0';

	return (s3);
}
