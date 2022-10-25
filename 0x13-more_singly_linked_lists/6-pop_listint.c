#include "lists.h"

/**
 * pop_listint - function that deletes the head node
 * and returns the head node’s data
 * @head: linked list head
 * Return: 0 if the linked list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *header;
	int result;

	if (*head == NULL)
		return (0);

	header = *head;
	if (header == NULL)
		return (0);

	result = header->n;
	*head = header->next;

	free(header);
	return (result);
}
