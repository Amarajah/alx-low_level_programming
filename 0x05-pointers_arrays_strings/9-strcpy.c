#include "main.h"
#include <stdio.h>

/**
 * _strcpy - copies a string
 * @src: character
 * @dest: character
 * Return: Always 0
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
