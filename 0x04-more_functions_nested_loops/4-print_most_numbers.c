#include "main.h"

/**
  * print_most_numbers - Print the numbers since 0 up to 9
  *
  * Description: Prints the numbers excluding 2 and 4
  *
  * Return: The numbers since 0 up to 9
  */

void print_most_numbers(void)
{
	int i;

	for (i = 48; x <= 57; x++)
	{
		if (i == 2 || i == 4)
		{
			continue;
		}
		else
		{
			_putchar(i);
		}
	}

	_putchar('\n');
}
