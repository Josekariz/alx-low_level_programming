#include "lists.h"

/**
 * dlistint_len - returns the No. of nodes in  doubly linked list
 * @h: pointer to the list
 *
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;

	if (!h)
		return (0);

	while (h)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}

/**
 * delete_dnodeint_at_index - del node in a doubly linked list
 * at an index
 * @head: double pointer to list
 * @index: index of the node to delete
 *
 * Return: 1 on success && -1 on failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temporary = *head;
	unsigned int i = 0;

	if (*head == NULL || dlistint_len(temporary) < index + 1)
		return (-1);

	if (!index)
	{
		(*head) = temporary->next;
		if (temporary->next)
			temporary->next->prev = NULL;
		temporary->next = NULL;
		free(temporary);
		return (1);
	}

	while (i < index)
	{
		temporary = temporary->next;
		i++;
	}

	temporary->prev->next = temporary->next;
	if (temporary->next)
		temporary->next->prev = temporary->prev;
	free(temporary);

	return (1);
}
