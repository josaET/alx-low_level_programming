#include "lists.h"

/**
 * print_listint - The function that prints all the elements of a listint_t list
 * @h: The linked where we will use to print its elements
 * Return: The number of node
 */

size_t print_listint(const listint_t *h)
{
	size_t node_count = 1;

	/* return 0 as no of nodes when h is null*/
	if (h == NULL)
		return (0);

	while (h->next != NULL)
	{
		printf("%d\n", h->n);

		/*go to the next node*/
		h = h->next;
		/*count no of nodes*/
		node_count++;
	}

	/*print last node*/
	printf("%d\n", h->n);

	return (node_count);
}
