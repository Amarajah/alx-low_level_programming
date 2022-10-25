#include "lists.h"

/**
 * reverse_listint - function that reverses a linked list
 * @head: linked list head
 * Return: a pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev, *ahead;

	if (head == NULL || *head == NULL)
		return (NULL);

	prev = NULL;

	while ((*head)->next != NULL)
	{
		ahead = (*head)->next;
		(*head)->next = prev;

		prev = *head;
		*head = ahead;
	}
	(*head)->next = prev;

	return (*head);
}
