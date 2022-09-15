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
	int 1;

	for (i = 'A'; i <= 'Z'; i++)
	{
		if (i == c)
		{
			return (1);
		}
	}
	return (0);
}
