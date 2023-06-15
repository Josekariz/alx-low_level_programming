#include "lists.h"

/**
 * add_dnodeint - adds a next node at the start of a doubly linked list
 * @head: double pointer to  list
 * @n: elems to insert in the next node
 *
 * Return: the address of the next element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *next;

	if (!head)
		return (NULL);

	next = malloc(sizeof(dlistint_t));
	if (!next)
		return (NULL);

	next->n = n;

	next->next = *head;
	next->prev = NULL;

	if (*head)
		(*head)->prev = next;

	*head = next;

	return (next);
}
