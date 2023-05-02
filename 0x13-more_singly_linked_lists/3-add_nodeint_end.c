#include "lists.h"

/**
 * add_nodeint_end - inserts a node at the end of  linked list
 * @head: pointer to the initail element in the list
 * @n: data to insert in the new element
 *
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *tempry = *head;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (tempry->next)
		tempry = tempry->next;

	tempry->next = new;

	return (new);
}
