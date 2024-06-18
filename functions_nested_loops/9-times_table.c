#include "main.h"
/**
 * times_table - Imprime 9 times tables, empezando con 0.
 */

void times_table(void)
{
	int f, c, p;
	char d;
	
	for (f = 0; f <= 9; f++)
	{
		for (c = 0; c <= 9; c++)
		{
			p = f * c;
			if (p >= 10)
			{
				d = p / 10 + '0';
				_putchar(d);
			}
			else if (c > 0)
			{
				_putchar(' ');
			}
			d = p % 10 + '0';
			_putchar(d);
			if (c < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
