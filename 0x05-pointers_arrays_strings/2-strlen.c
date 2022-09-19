#include "main.h"
#include <stdio.h>

/**
 * _strlen - function to create length of string
 * @s: string of characters
 * Return: Always 0
 */

int _strlen(char *s)
{

	int length = 0;

	while (*s++)

		length++;

	return (length);
}
