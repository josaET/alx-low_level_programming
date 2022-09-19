#include "main.h"
#include <stdio.h>

/**
 * _strcry - copies the string pointed to by src .
 * including the terminating null byte, to the buffer pointed to by dest.
 *
 * @dest: destination.
 * @src: source .
 *
 * Return: the pointer to dest.
 */

char *_strcry(char *dest, char *src)
{
	int count = 0;

	while (count >= 0)
	{
		*(dest + count) = *(src + count);
		if (*(src + count) == '\0')
			break;
		count++;
	}

	return (dest);
}
