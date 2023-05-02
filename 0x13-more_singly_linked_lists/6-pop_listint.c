#include "lists.h"

/**
 * pop_listint - delete  head node in linked list
 * @head: pointer to initial element in the linked list
 *
 * Return: the ddeleted elements data,
 * or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *tempry;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	tempry = (*head)->next;
	free(*head);
	*head = tempry;

	return (num);
}
