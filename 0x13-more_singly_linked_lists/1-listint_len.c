#include "lists.h"

/**
 * listint_len - function that returns the number of elements in a linked list
 * @h: linked list
 * Return: number of element in a list
 */

size_t listint_len(const listint_t *h)
{
	const listint_t *current = h;

	size_t count = 0;

	while (current != NULL)
	{
		current = current->next;
		count++;
	}
	return(count);
}
