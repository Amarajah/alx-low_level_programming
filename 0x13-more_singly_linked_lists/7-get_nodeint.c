#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the
 * nth node of a listint_t linked list.
 * @head: linked list begining
 * @index: index of the node, starting at 0
 * Return: the nth node
 * if the node does not exist, return NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current = head;

	if (head == NULL)
		return (NULL);

	while (index != 0)
	{
		current = current->next;
		index--;
		if (current == NULL)
			return (0);
	}

	return (current);
}
