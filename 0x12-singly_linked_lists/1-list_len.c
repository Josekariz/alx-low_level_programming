#include <stdlib.h>
#include "lists.h"

/**
 * list_len - returns the no. of elements in a linked list
 * @h: pointer to  list_t list
 *
 * Return: np. of elements in h
 */
size_t list_len(const list_t *h)
{
	size_t j = 0;

	while (h)
	{
		j++;
		h = h->next;
	}
	return (j);
}
