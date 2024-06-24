#include "main.h"
/**
 * _atoi - covert a string to an integer
 * @s: string
 */

int _atoi(char *s)
{
	int result;
	int signo = 1;
	int i = 0;

	// determinar que signo tiene
	if (s[i] == '-')

	// Pasar el numero a entero
	while (s[i] >= '0' && s[i] <= '9')
	{
		result = result * 10 + (s[i] - '0');
		i++;
