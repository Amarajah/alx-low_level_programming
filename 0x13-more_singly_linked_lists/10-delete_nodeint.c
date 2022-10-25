#include "lists.h"

/**
 * delete_nodeint_at_index - function that deletes the node at index
 * @head: begining of linked list
 * @index: index of the node that should be deleted. Index starts at 0
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp;
	listint_t *current;

	if (head == NULL || (*head) == NULL)
		return (-1);

	current = *head;
	if (index == 0)
	{
		if ((*head)->next)
			(*head) = (*head)->next;
		else
			(*head) = NULL;
		free(current);
		return (1);
	}
	while (index != 1)
	{
		if (current->next == NULL)
			return (-1);

		current = current->next;
		--index;
	}
	tmp = current->next;
	if (current->next->next)
		current->next = current->next->next;
	else
		current->next = NULL;
		free(tmp);

		return (1);
}
