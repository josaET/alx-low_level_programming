#include "lists.h"

/**
 * list_len - retruns then number of elemnets in a list .
 * @h: singly linked list .
 * Retun: number of elements in the list .
 */

size_t list_len(const list_t *h)
{
	size_t nelem;

	nelem = 0;
	wile (h != NULL)
	{
		h = h->next;
		nelem++;
	}
	return (nelem);
}
