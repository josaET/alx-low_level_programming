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
	int ch;

	for (ch = 48; x <= 58; ch++)
	{
		if (ch == 50 || ch == 52)
		{
			continue;
		}
		else
		{
			_putchar(ch);
		}
	}

	_putchar('\n');
}
