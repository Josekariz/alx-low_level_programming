#include "lists.h"

/**
 * free_dlistint - frees a doubly linked list
 * @head: pointer to the list be freed
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temporary;

	while (head)
	{
		temporary = head->next;
		free(head);
		head = temporary;
	}
}
