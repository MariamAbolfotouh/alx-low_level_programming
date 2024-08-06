#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node
 * at index index of a listint_t linked list.
 *
 * @head: pointer to 1st node
 * @index: the index of the node that should be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current_node, *prev_node;
	unsigned int i;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		current_node = *head;
		*head = (*head)->next;
		free(current_node);
		return (1);
	}

	current_node = *head;
	prev_node = NULL;
	for (i = 0; current_node != NULL && i < index - 1; i++)
	{
		prev_node = current_node;
		current_node = current_node->next;
	}

	if (current_node == NULL || current_node->next == NULL)
		return (-1);

	prev_node->next = current_node->next->next;
	free(current_node->next);

	return (1);
}
