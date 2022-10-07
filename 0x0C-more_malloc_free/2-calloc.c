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

	ptr = (int *)malloc(size * sizeof(int));

	if (nmemb || size == 0)
	{
		return (NULL);
	}
	if (ptr == NULL)
	{
		return (NULL);
	}
	exit(0);
}
