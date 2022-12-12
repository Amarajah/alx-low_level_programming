#include "main.h"
/**
 * _strchr - searches for the first occurrence of the character c
 * @c: character
 * @s: string
 * Return: NULL or 0
 */
char *_strchr(char *s, char c)
{
	int index;

	for (index = 0; s[index] >= '\0'; index++)
	{
		if (s[index] == c)
			return (s + index);
	}
	return ('\0');
}
