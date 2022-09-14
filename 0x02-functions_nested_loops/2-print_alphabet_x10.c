#include "main.h"

/**
 * print_alphabet_x10 - a function that prints 10 times the alphabet .
 *
 * Retrun: x10 a-z
 */

void print_alphabet_x10(void)
{
	int t, d;

	d = 0;

	while (d < 10)
	{
		for (t = 'a'; t <= 'z'; t++)
		{
			_putchar(t);
		}
		t++;
		
		_putchar('\n');
	}
}
