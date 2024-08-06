#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 *
 * @head: pointer to 1st head
 *
 * Return: the head node’s data (n)
 * if the linked list is empty return 0
 */

int pop_listint(listint_t **head)
{
	listint_t *current_node;
	int n;

	if (!head || !*head)
		return (0);

	current_node = (*head)->next;
	n = (*head)->n;
	free(*head);
	*head = current_node;
	return (n);
}
