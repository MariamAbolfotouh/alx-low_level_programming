#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 *
 * @head: pointer to 1st node
 * @n: new node value
 *
 * Return: address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	lisint_t *new_node = malloc(sizeof(listint_t));
	listint_t *last_node;

	if (!new_node || !head)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
		*head = new_node;
	else
	{
		last_node = *head;
		while (last_node->next)
			last_node = node->next;
		last_node->next = new_node;
	}
	return (new_node);
}
