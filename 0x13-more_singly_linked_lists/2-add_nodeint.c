#include "lists.h"

/**
 * add_nodeint - function that adds a new node at the beginning of a list
 * @n: linked list
 * @head: head of linked list
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = (listint_t *) malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->n = n;

	new_node->next = (*head);

	(*head) = new_node;

	return (new_node);
}
