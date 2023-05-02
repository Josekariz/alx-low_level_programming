#include "lists.h"

/**
 * listint_len - return  No. of element(s) in a linked list(s)
 * @h: linked list(s) of type listint_t to traverse
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t numbr = 0;

	while (h)
	{
		numbr++;
		h = h->next;
	}

	return (numbr);
}
