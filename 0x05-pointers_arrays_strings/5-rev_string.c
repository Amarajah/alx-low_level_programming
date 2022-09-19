#include "main.h"
#include <stdio.h>

/**
 * rev_string - reverses the string
 * @s: character string
 * Return: Always 0
 */

void rev_string(char *s)
{
	int i, j, temp;

	i = 0;
	j = 0;

	while (s[j] != '\0')
	{
		j++;
	}
	j--;
	while (j > i)
	{
		temp = s[j];
		s[j--] = s[i];
		s[i++] = temp;
	}
}
