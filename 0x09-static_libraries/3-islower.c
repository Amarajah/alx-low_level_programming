#include "main.h"

/**
 * _islower - function to check if letter is in lowercase
 * @c: integer
 * Return: letter
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);

	else
		return (0);
}
