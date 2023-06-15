#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a node at an index
 * in a doubly linked list
 * @h: double pointer to the list
 * @idx: index of the node to insert
 * @n: data to insert
 *
 * Return: address of the new node NULL if failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i;
	dlistint_t *new;
	dlistint_t *temporary = *h;

	new = malloc(sizeof(dlistint_t));
	if (!new || !h)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (idx == 0)
		return (add_dnodeint(h, n));

	for (i = 0; temporary && i < idx; i++)
	{
		if (i == idx - 1)
		{
			if (temporary->next == NULL)
				return (add_dnodeint_end(h, n));
			new->next = temporary->next;
			new->prev = temporary;
			temporary->next->prev = new;
			temporary->next = new;
			return (new);
		}
		else
			temporary = temporary->next;
	}

	return (NULL);
}
