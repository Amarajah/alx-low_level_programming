#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - function that allocates memory using malloc.
 * @b: unsigned int
 * Return: a pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = (int *)malloc(b * sizeof(int));

	if (ptr == NULL)
	{
		exit(98);
	}
	else
	{
		return (ptr);
	}
	return (0);
}
