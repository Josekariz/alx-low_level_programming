#include "lists.h"

/**
 * sum_listint - calculate sum  the data in a listint_t list
 * @head: first node in the linked list
 *
 * Return: resulting sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *tempry = head;

	while (tempry)
	{
		sum += tempry->n;
		tempry = tempry->next;
	}

	return (sum);
}
