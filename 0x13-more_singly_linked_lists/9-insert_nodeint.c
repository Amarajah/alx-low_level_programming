#include "lists.h"

/**
 * insert_nodeint_at_index - function that inserts
 * a new node at a given position
 * @head: begining of linked list
 * @idx: index of the list where the new node should be
 * added. Index starts at 0
 * @n: new node data
 * Return: the address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current;
	listint_t *newNode = (listint_t *) malloc(sizeof(listint_t));

	if (!newNode)
		return (0);

	newNode->next = NULL;
	newNode->n = n;

	if (head == NULL)
		return (0);

	if (idx == 0)
	{
		newNode->next = *head;
		(*head) = newNode;
		return (newNode);
	}

	current = *head;

	unsigned int i = 0;

	while (idx != 1)
	{
		current = current->next;
		--idx;
		if (current == NULL)
		{
			free(newNode);
			return (NULL);
		}
	}
	newNode->next = current->next;
	current->next = newNode;

	return (newNode);
}
