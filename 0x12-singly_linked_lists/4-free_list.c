#include "lists.h"

/**
 * free_list - frees a list_t list.
 *
 * @head: Pointer to the head of the list
 *
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *node, *next_node;

	if (!head)
		return;

	node = head;
	while (node)
	{
		neext_node = node->next;
		free(node->str);
		free(node);
		node = next_node;
	}
}
