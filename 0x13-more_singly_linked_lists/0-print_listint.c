#include "lists.h"

/**
 * print_listint - print element(s) of a linked list
 * @h: linked list of type listint_t to be printed
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t numbr = 0;

	while (h)
	{
		printf("%d\n", h->n);
		numbr++;
		h = h->next;
	}

	return (numbr);
}
