#include "main.h"
/**
 * _strcmp - function to compare strings
 * @s1: string one
 * @s2: string two
 * Return: 0 or negative value
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
