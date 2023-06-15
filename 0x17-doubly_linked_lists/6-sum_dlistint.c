#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data
 * @head: pointer to the list
 *
 * Return: sum of the data
 */
int sum_dlistint(dlistint_t *head)
{
	int added = 0;

	while (head)
	{
		added += head->n;
		head = head->next;
	}

	return (added);
}
