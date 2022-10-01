#include "main.h"

/**
 * _strlen - function to get string length
 * @s: character string
 * Return: number of character
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s++)
		length++;

	return (length);
}
