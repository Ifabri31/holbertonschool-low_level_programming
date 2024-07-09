#include "main.h"
/**
 * string_nconcat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The maximum number of bytes from s2 to concatenate.
 * Return: Pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int long1 = 0;
	int i, j;
	char *con;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[long1])
		long1++;

	con = malloc(sizeof(char) * (long1 + n + 1));
	if (con == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		con[i] = s1[i];
	for (j = 0; j < n && s2[j]; j++)
		concat[long1 + j] = s2[j];

	con[long1 + j] = '\0';
	return (con);
}
