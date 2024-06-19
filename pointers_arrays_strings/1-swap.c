#include "main.h"
/**
 * swap_int - cambia los valores de a y b entre ellos
 * @a: pointer del primer value
 * @b: pointer del segundo value
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
