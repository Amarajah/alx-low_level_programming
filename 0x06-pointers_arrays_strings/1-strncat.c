#include "main.h"
#include <stdio.h>

/**
 * _strncat - sring concatenator
 *
 * @dest: string
 * @src: string
 * @n: integer
 * Return: Always 0.
 */

char *_strncat(char *dest, char *src, int n)
{
	int a = 0;
	int b = 0;

	while (dest[a] != '\0')
	{
		a++;
	}
	while (a < n && src[b] != '\0')
	{
		dest[a] += src[b];
		a++;
		b++;
	}
	dest += '\0';

	return (dest);
}
