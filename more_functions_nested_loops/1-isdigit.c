#include "main.h"
/**
 * _isdigit - Chequea si el digit (0-9).
 * @c: el numero chequeado.
 *
 * Return: 1 if the number is a digit, 0 otherwise.
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);

	else
		return (0);
}
