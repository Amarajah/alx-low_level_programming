#include "main.h"

/**
 * _memset - function used to fill a block of memory with a particular value.
 * @s: character
 * @n: unsigned int
 * @c: integer
 * Return: 0
 */

void *_memset(void *s, int c, size_t n)
{
	unsigned int index;

	unsigned char *memory = s, value = c;

	for (index = 0; index < n; index++)

		memory[index] = value;

	return (memory);
}
