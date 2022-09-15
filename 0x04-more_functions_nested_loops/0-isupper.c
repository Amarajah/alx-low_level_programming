#include "main.h"

/**
 * _isupper - checks uppercase letter
 * @c: letter to check for
 *
 *
 * Return: 1 if c is uppercase else return 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')

		return (1);
	else
		return (0);
}
