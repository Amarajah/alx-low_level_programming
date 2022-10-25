#include "lists.h"

/**
 * pop_listint - function that deletes the head node
 * and returns the head node’s data
 * @head: linked list head
 * @n:head node’s data (n).
 * Return: 0 if the linked list is empty
 */

int pop_listint(listint_t **head)
{
	if (*head == NULL)
		return (0);

	listint_t* header = *head;
	int result = header->n;

	(*head) = (*head)->next;

	free(head);
	return (result);
}
