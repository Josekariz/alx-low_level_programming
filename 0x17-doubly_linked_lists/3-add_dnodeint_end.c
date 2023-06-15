#include "lists.h"

/**
 * add_dnodeint_end - adds new node at the end
 * @head: double pointer to list
 * @n: elem to insert in the new node
 *
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *tempotary = *head;

	if (!head)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}

	while (tempotary->next)
		tempotary = tempotary->next;

	tempotary->next = new;
	new->prev = tempotary;

	return (new);
}
