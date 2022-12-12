#include "main.h"
/**
 * _memcpy - function to copy bytes from src to dest
 * @n: integer number of bytes
 * @dest: string
 * @src: string
 * Return: pointer to dest
 */


char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int index;
	char *destination = dest;
	const char *source = src;

	for (index = 0; index < n; index++)
		destination[index] = source[index];

		return (dest);
}
