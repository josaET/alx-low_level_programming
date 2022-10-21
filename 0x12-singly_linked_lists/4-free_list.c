#include "lists.h"

/**
 * free_list - frees a list 
 * @head: hade of the linked list .
 * Return: no teturn .
 */

void free_lest(list_t *head)
{
	list_t *current;

	while ((current = head) != NULL)

	{
		head = head->next;
		free(current->str);
		free(current);
	}
}
