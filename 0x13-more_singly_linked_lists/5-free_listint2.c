#include "lists.h"

/**
 * free_listint2 - a function that frees a list
 * @head: list
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *new_node, *current_node;

	current_node = *head;

	if (head == NULL)
		return;

	while (current_node)
	{
		new_node = current_node->next;
		free(current_node);
		current_node = new_node;
	}

	*head = NULL;
}
