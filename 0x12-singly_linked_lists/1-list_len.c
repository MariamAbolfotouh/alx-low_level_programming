#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list
 *
 * @h: pointer to 1st node
 *
 * Return: number of elements in a linked list_t list
 */

size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
