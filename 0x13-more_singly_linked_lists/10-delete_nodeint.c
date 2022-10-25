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

	if ((*head)->n == index)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
	else
	{
		listint_t *current  = *head;

		while (current->next != NULL)
		{
			if (current->next->n == index)
			{
				temp = current->next;

				current->next = current->next->next;
				free(temp);
				break;
			}
			else
				current = current->next;
		}
	}
}
