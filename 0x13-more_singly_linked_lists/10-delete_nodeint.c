#include "lists.h"

/**
 * delete_nodeint_at_index - delete  node in a linked list at a certain index
 * @head: pointer to the 1st element in the list
 * @index: index of the node to delete
 *
 * Return: 1 (Success), or -1 (Fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tempry = *head;
	listint_t *current = NULL;
	unsigned int m = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(tempry);
		return (1);
	}

	while (m < index - 1)
	{
		if (!tempry || !(tempry->next))
			return (-1);
		tempry = tempry->next;
		m++;
	}


	current = tempry->next;
	tempry->next = current->next;
	free(current);

	return (1);
}
