#include "lists.h"

/**
 * add_nodeint_end - function that adds a new node at the end of a list
 * @head: begining of linked list
 * @n: int element of linked list
 * Return: the address of the new element, or NULL
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t* new_node =
		(listint_t*)malloc(sizeof(listint_t));

	listint_t *last = *head;

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
		*head == new_node;
		return(NULL);

	while (last->next != NULL)
		last = last->next;

	last->next = new_node;

	return(new_node);
}
