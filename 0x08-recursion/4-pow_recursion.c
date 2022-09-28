#include "main.h"

/**
 * _pow_recursion - function Returns the value of x rasied to the power of y.
 * @x: Base
 * @y: Exponent
 *
 * Return: The value of X raised to the power of y.
 */

int _pow_recursion(int x, int y)
{
	int n = x;

	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	y--;
	return (n *= _pow_recursion(x, y));
}
