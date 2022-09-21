#include "main.h"
#include <stdio.h>

/**
 * _strcat - program to concatenate strings
 *
 * @dest: one string
 * @src: another string
 * Return: Always 0.
 */

char *_strcat(char *dest, char *src)
{
	int a = 0;
	int b = 0;

	while (dest[a] != '\0')
	{
		a++;
	}

	while (src[b] != '\0')
	{
		dest[a] += src[b];
		a++;
		b++;
	}

	dest += '\0';

	return (dest);
}
