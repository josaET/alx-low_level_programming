#include "lists.h"

/**
 * listint_len - A function that returns the number of elements.
 * @h: pointer to the first node
 *
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
