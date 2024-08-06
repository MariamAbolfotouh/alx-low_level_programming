#include "lists.h"

/**
 * free_listint2 - frees a listint_t list.
 *
 * @head: pointer to 1st node
 *
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *current_node, *temp;

	if (head == NULL)
		return;
	current_node = *head;
	while (current_node)
	{
		temp = current_node;
		current_node = current_node->next;
		free(temp);
	}
	*head = NULL;
}
