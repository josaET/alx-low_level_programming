#include "main.h"

/**
 * factorial - Function that returnes the facoral fo a given number .
 * @n: given number .
 *
 * Return: factototal of n.
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
