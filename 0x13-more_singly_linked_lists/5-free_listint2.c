#include "lists.h"

/**
 * free_listint2 - frees linked list
 * @head: pointer to the listint_t list to be freed
 */
void free_listint2(listint_t **head)
{
	listint_t *tempry;

	if (head == NULL)
		return;

	while (*head)
	{
		tempry = (*head)->next;
		free(*head);
		*head = tempry;
	}

	*head = NULL;
}
