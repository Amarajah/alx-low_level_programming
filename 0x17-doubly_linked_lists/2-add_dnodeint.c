#include "lists.h"
/**
 * add_dnodeint - a function that adds a new node at a list's beginning
 * @n: int
 * @head: beginning of list
 * Return: the address of the new element, or NULL if it fails
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;
	if (*head != NULL)
		(*head)->prev = new_node;
	*head = new_node;

	return (new_node);
}
