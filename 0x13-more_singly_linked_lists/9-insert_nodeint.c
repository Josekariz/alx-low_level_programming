#include "lists.h"

/**
 * insert_nodeint_at_index - insert  new node in a linked list,
 * at a  position
 * @head: pointer to the 1st node in the list
 * @idx: index where the new node is added
 * @n: data  inserted at the new node
 *
 * Return: pointer to the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new;
	listint_t *tempry = *head;

	new = malloc(sizeof(listint_t));
	if (!new || !head)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	for (i = 0; tempry && i < idx; i++)
	{
		if (i == idx - 1)
		{
			new->next = tempry->next;
			tempry->next = new;
			return (new);
		}
		else
			tempry = tempry->next;
	}

	return (NULL);
}
