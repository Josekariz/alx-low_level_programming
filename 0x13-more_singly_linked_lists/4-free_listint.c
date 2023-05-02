#include "lists.h"

/**
 * free_listint - frees linked list
 * @head: listint_t list to be freed
 */
void free_listint(listint_t *head)
{
	listint_t *tempry;

	while (head)
	{
		tempry = head->next;
		free(head);
		head = tempry;
	}
}
