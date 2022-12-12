#include "main.h"
/**
 * _strpbrk - function locates the first occurrence in the string pointed to
 * by string1 of any character from the string pointed to by string2
 * @s: character
 * @accept: character
 * Return: value of character
 */
char *_strpbrk(char *s, char *accept)
{
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
				return (s);
		}
		s++;
	}
	return ('\0');
}
