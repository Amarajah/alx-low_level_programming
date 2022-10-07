#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat -  function that concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: integer
 * Return: If the function fails, it should return NULL
 * if NULL is passed, treat it as an empty string
 * point to a newly allocated space in memory, which contains s1
 * followed by the first n bytes of s2, and null terminated
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int a = 0;
	unsigned int b = 0;

	while (s1[a] != '\0')
	{
		a++;
	}
	while (a < n && s2[b] != '\0')
	{
		s1[a] += s2[b];
		a++;
		b++;
	}
	s1 += '\0';

	return (s1);

	if (s1[0] && s2[0] == '\0')
	{
		return (NULL);
	}

	if (n >= strlen(s2))
	{
		return (s2);
	}
}
