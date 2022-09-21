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
	char dest, src;

	strcat(dest,src);
	
	printf("Concatenated String: %s\n", strcat(dest,src));

	return (0);
}
