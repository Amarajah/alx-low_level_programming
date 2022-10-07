#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - function that allocates memory for an array
 * @nmemb: integer
 * @size: integer
 * Return: varying outputs
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *ptr;
	unsigned int index;

	ptr = malloc(size * nmemb);

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (index = 0; index < (size * nmemb); index++)
		ptr[index] = '\0';

	return (ptr);
}
