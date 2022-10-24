#include "lists.h"

/**
 * free_listint - function that frees a listint_t list.
 * @head: begining of linked list
 * Return: Always 0.
 */

void free_listint(listint_t *head)
{
	listint_t *tmp;
	listint_t *next;

	tmp = head;

	while (tmp != NULL)
	{
		next = tmp->next;
		free(tmp);
		tmp = next;
	}
}
