#include "main.h"

/**
 * _print_rev_recursion - Function prints a string in revere .
 * @s: String to be recersed .
 *
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
