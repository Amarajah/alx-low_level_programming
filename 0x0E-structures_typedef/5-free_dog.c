#include "dog.h"

/**
 * free_dog - function that frees dogs
 * @d: struct pointer to dogs to be freed
 * Return: Always 0.
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->owner);
	free(d->name);
	free(d);
}
