#include "main.h"
/**
 * _memset - function used to fill a block of memory with a particular value.
 * @s: character
 * @n: unsigned int
 * @c: integer
 * Return: 0
 */

char *_memset(char *s, char c, unsigned int n)
{
	unsigned int index;

	char *memory = s, value = c;

	for (index = 0; index < n; index++)

		memory[index] = value;
	return (memory);
}
