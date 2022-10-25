#include "list.h"

/**
 * print_listint - The function that prints all the elements of a listint_t list
 * @h: The linked where we will use to print its elements
 * Return: The number of node
 */

size_t print_listint(const listint_t *h);
{
	size_t num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}

	return (num);
}
