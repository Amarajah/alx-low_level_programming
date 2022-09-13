#include <stdio.h>

/**
 *_islower - Checks if a character is lowercase.
 *
 *@c: is the character to be checked.
 *
 *Return: 1 if character is lowercase, else print 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')

		return (1);
	else
		return (0);
}
