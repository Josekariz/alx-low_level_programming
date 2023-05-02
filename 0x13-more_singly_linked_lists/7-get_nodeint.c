#include "lists.h"

/**
 * get_nodeint_at_index - returns  node at certain index in linked list
 * @head: first node in the linked list
 * @index: index of the node to be returned
 *
 * Return: pointer to the node we're looking for, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *tempry = head;

	while (tempry && i < index)
	{
		tempry = tempry->next;
		i++;
	}

	return (tempry ? tempry : NULL);
}
