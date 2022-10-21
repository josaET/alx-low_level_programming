#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all the elements of a list_t list .
 * @h: singly linked list .
 *
 * Return: number of elemnts in the list
 */

size_t print_list(const list_t *h)
{
	size_t node;

	node = 0;
	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		node++;
	}
	return (node);
}
