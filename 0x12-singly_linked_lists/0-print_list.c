#include "lists.h"

/**
 * _strlen - get the string length
 *
 * @s: string
 *
 * Return: length of the string
 */
int _strlen(char *s)
{
	int i = 0;

	if (s == NULL)
	{
		return (0);
	}
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}


/**
 * print_list - prints all the elements of a list_t list
 *
 * @h: pointer to 1st node
 *
 * Return: list size
 */

size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("[%d] %s\n", _strlen(h->str), h->str ? h->str : "(nil)");
		h = h->next;
		i++;
	}
	return (i);
}
